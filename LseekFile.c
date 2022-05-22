#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
   char frame[30];
   int fd =0 ,ret = 0;
   char Data[11];
   
   printf("Enter ther file name that you want to open\n");
   scanf("%s",frame);
    
   fd = open(frame,O_RDWR);
   if(fd == -1)
   {

      printf("Unable to open file\n");
      return -1;
   }
   else
    {
       printf("File us succesfully opened with fd : %d\n",fd);
    }
 
      lseek(fd,4,0);
     // 1: File descriptor  Kashat
     // 2: Displacement     Kitine halchal
     // 3: From Where       Kuthun (0 : Start of file 1 : Current position 2: End of file)

      read(fd,Data,6);
    
      write(1,Data,6);
 
      close(fd);
    
  return 0;
}
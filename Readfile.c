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
 

      read(fd,Data,6);
    
      //printf("Data from file : %6s\n",Data);
      write(1,Data,6);
      close(fd);
    
  return 0;
}
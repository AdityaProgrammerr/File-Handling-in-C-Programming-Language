#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
   char frame[30];
   int fd = 0;

   
   printf("Enter ther file name that you want to open\n");
   scanf("%s",frame);
    
   fd = open(frame,O_RDWR);
   if(fd == -1)
   {

      printf("Unable to open file\n");
   }
   else
    {
       printf("File us succesfully opened with fd : %d\n",fd);
    }
 
  return 0;
}
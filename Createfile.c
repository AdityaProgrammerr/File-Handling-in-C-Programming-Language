#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
   char frame[30];
   int fd = 0;

   
   printf("Enter ther file name that you want to create\n");
   scanf("%s",frame);
    
   fd = creat(frame,0777);
   if(fd == -1)
   {

      printf("Unable to create file\n");
   }
   else
    {
       printf("File us succesfully created with fd : %d\n",fd);
    }
 
  return 0;
}
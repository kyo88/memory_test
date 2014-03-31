#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   char ch;
   char file_name[25]="text.data";
   FILE *fp;
 
   printf("Enter the name of file you wish to see\n");
   //gets(file_name);
//   file_name="text.data";
 
   fp = fopen(file_name,"r"); // read mode
 
   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
 
   printf("The contents of %s file are :\n", file_name);
   int num=1;
   while( ( ch = fgetc(fp) ) != EOF )
      num++;
   printf("Number of lines %d \n", num);
 
   while(1){
	sleep(10000);
   }

   fclose(fp);
   return 0;
}

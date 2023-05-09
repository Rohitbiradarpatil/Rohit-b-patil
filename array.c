#include<stdio.h>
#include<string.h>

void main()
{
   int a;
   //printf("ENTER THE NUMBER OF LINES\n");
   //scanf("%d",&a);
   FILE *ptr=NULL;
   ptr=fopen("/home/rohit/DSA/test.txt","r");
   char ca[10][100];
   for(int i=0;i<3;i++)
   fgets(ca[i],100,ptr);
   for(int i=0;i<3;i++)
   printf("line is =%s",ca[i]);
  
   fclose(ptr);
   return 0;
}
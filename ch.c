#include<stdio.h>
#include<stdlib.h>
void read(int (*p)[3]);
void print(int (*p)[3]);
void mult(int (*p1)[3],int (*p2)[3]);

void main()
{
    int mat1[3][3],mat2[3][3];
    int (*p1)[3],(*p2)[3];
    p1=mat1;
    p2=mat2;
    printf("enter the elements for 1st matrix\n");
    read(p1);
    print(p1);
     printf("enter the elements for 2nd matrix\n");
    read(p2);
    print(p2);
    mult(p1,p2);
}
void read(int (*p)[3])
{
   int x,y;
   for(x=0;x<3;x++)
   {
       for(y=0;y<3;y++)
       {
           //scanf("%d",(*(*p+x)+y));
           scanf("%d",(*p+x)+y);
       }
   }
}
 void print(int (*p)[3])
 {
     int x,y;
   for(x=0;x<3;x++)
   {
       for(y=0;y<3;y++)
       {
           printf("%d",(*(*p+x)+y));
       }
       printf("\n");
   }
}
void mult(int (*p1)[3],int (*p2)[3])
{
   int x,y,k,sum=0,res[3][3],*re[3];
    re=res;
   for(x=0;x<3;x++)
   {
       for(y=0;y<3;y++)
       {
          for(k=0;k<3;k++)
           { 
            //printf("1=%d\t2=%d\n",(*(*(p1+x)+k), (*(*(p2+k)+y)));
             sum=sum+((*(*(p1+x)+k)) * (*(*(p2+k)+y)));

           }
           printf("%d\t",sum);
           (*(*(re+x)+y))=sum;
           sum=0;
       }
   }
   printf("\n");
   print("MULTIPLIED MATRIX IS",res);
}
//1 2 3 4 5 6 7 8 9
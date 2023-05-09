#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sort(int h[1000],int x);
int main()
{
    int n,p,q,i,num,x,a,h[1000];
    FILE *s;
    printf("enter the range in which N random numbers are to be generated in order [lower,upper]\n");
    scanf("%d%d",&p,&q);
    printf("enter the number of random numbers to be generated\n");
    scanf("%d",&n);
    s=fopen("input.txt","w");
    for(i=0;i<n;i++)
    {
       num=(rand()%(q-p+1))+p;
       printf("%d\t",num);
       //putw(num,s);
       fprintf(s,"%d\n",num);
    }
    fclose(s);
    s=fopen("input.txt","r");
    //c=fopen("output.txt","w");
    printf("\nenter the number of numbers to be sorted\n");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
      fscanf(s,"%d",&a);
       h[i]=a;
      //fprintf(c,"%d\n",a);
      printf("%d\t",h[i]);
    }
    return 0;
}

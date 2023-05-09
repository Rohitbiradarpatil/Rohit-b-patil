#include<stdio.h>
#include<time.h>
 
 void bubblesort(int a,int arr[])
  {
    int temp;
     for(int i=0;i<a-1;i++)
     {
      for(int j=0;j<a-1-i;j++)
      {
       if(arr[j+1]>arr[j])
       {
        temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
       }
      }  
     }    
     printf("SORTED ARRAY IS \n");
        for(int i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
  }
 int main()
 {
     int a;
     clock_t start_t,end_t;
     double total_t;
     start_t=clock();
     FILE *f;
     f=fopen("/home/rohit/DSA/sort.txt","a+");
    printf("START TIME %ld\n",start_t);
    //printf("LENGHT OF AN INPUT\n");
    fscanf(f,"%d",&a);
    int arr[a];
  
   // printf("ENTER THE ELEMENTS\n");
    for(int i=0;i<a;i++)
    {
        fscanf(f,"%d",&arr[i]);
        printf("%d\t",arr[i]);
    }
   bubblesort(a,arr);
    end_t=clock();
    printf("END TIME %ld\n",end_t);
    total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
    printf("TIME TAKEN = %f",total_t);
    fprintf(f,"SORTED ARRAY IS\n");
        for(int i=0;i<a;i++)
    {
        fprintf(f,"%d\n",arr[i]);
    }
    fclose(f);
 }
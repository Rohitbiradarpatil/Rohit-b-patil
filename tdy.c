#include<stdio.h>

void recu(int n)
{
    if(n>0)
    {
        for(int i=0;i<n;i++)
        printf("%d\t",n);
        recu(n-1);
    }
}
int main()
{
    recu(3);
}
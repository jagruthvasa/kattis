#include<stdio.h>
int main()
{
    int a[5][4],i,j,sum=0,c[5],d=0,b,f=0;

    for( i=0;i<5;i++)
    { 
          for( j=0;j<4;j++)
          {
                scanf("%d",&a[i][j]);
                sum=sum+a[i][j];
          }
      c[i]=sum;
      sum=0;
    }
    for(i=0;i<5;i++)
    {
          if(c[i]>d)
          {
                d=c[i];
                f=i;
          }
    }
    printf("%d %d",f+1,d);
    
}
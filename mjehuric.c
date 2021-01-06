#include<stdio.h>
int main()
{
      int i,a[5],j,k;
      for(i=0;i<5;i++)
      scanf("%d",&a[i]);
      for(i=0;i<5;i++)
      {
            for(j=0;j<5-i-1;j++)
            {
                  if(a[j]>a[j+1])
                  {
                        int b=a[j];
                        a[j]=a[j+1];
                        a[j+1]=b;
                        for(k=0;k<5;k++)
                        {
                              printf("%d ",a[k]);
                        }
                        printf("\n");
                  }
            }   
      }
}
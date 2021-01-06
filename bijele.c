#include<stdio.h>
int main()
{
      int s[6],i,a[6];
      for(i=0;i<6;i++)
      {
            scanf("%d",&s[i]);
      }
      for(i=0;i<2;i++)
      {
            a[i]=1-s[i];
      }
      for(i=2;i<5;i++)
      {
            a[i]=2-s[i];
      }
      a[5]=8-s[5];
      for(i=0;i<6;i++)
      {
            printf("%d ",a[i]);
      }

}
#include<stdio.h>
int main()
{
      int n,a[20001],i,d=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
            scanf("%d",&a[i]);
            if(a[i] < 0)
            d -= a[i];
      }
      printf("%d",d);
      
}
#include<stdio.h>
int main()
{
      int n,i,j,b,e=0,o;
      scanf("%d",&n);
      int a[n];
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      {
            b=a[i];
            int c=0;
            for(j=0;j<n;j++)
            {
                  if(b == a[j])
                  {
                        c++;
                  }
            }
            if(c==1)
            {
                  if(a[i]>e)
                  {
                        e=a[i];
                        o=i;
                  }
            }
      }
      if(e!=0)
      printf("%d",o+1);
      else
      printf("none");
}
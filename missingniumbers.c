#include<stdio.h>
int main()
{
      int n,d=0,c=0,e=0;
      scanf("%d",&n);
      int a[n];
      for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            if(a[i]>d)
            d=a[i];
      }
      for(int i=1;i<=d;i++)
      {

            for(int j=1;j<=n;j++)
            {
                  if(i != a[j])
                  {
                        c++;
                  }
            }
            if(c==n)
            {
                  e++;     
                  printf("%d \n",i);
            }
            c=0;
      }
      if(e==0)
      {
            printf("good job");

      }
}

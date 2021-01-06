#include<stdio.h>
int dig(int i)
{
      int e=0;
      while(i)
      {
            i /= 10;
            e++;
      }
      return e;
}      
int main()
{
      int n,i,sum=1,e,a;
      scanf("%d",&n);
      int z=dig(n);
      while(z>1)
      {
            sum=1;
            while(n)
            {
                  e = n%10;
                  if(e!=0)
                  sum *= e;
                  n /= 10;
            }
            n=sum;
            z=dig(n);
      }
      printf("%d",n);
}
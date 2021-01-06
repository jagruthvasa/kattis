#include<stdio.h>
#define singular "piece"
#define plural "pieces"
int main()
{
      int n,m,p;
      scanf("%d %d",&n,&m);
      p=m-n;
      if(m>n)
      {
            printf("Dr. Chaz will have %d %s of chicken left over!",p,p == 1?singular : plural);
      }
      else
      {
            printf("Dr. Chaz needs %d more %s of chicken!",-p,p == -1?singular : plural);
      }
      
}
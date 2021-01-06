#include<stdio.h>
int main()
{
      int n,t,a=0,ab=0,i=0;
      scanf("%d%d",&n,&t);
      while(n-- > 0)
      {
            scanf("%d",&ab);
            if((a+=ab) <=  t)
            i++;
            else
            break;
            
      }
      while(n-- > 0)
      scanf("%d",&ab);
      printf("%d",i);
      return 0;
}



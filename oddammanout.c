#include<stdio.h>
int main()
{
      int n,i,c,flag=0,j,d=1;
      scanf("%d",&n);
      while(n--)
      {
            int a;
            scanf("%d",&a);
            int b[a];
            for(i=0;i<a;i++)
            {
                  scanf("%d",&b[i]);
            }
            for(i=0;i<a;i++)
            {
                  c=b[i];
                  flag=0;
                  for(j=0;j<a;j++)
                  {
                        if(c==b[j])
                        flag++;
                  }
                  if(flag==1)
                  {
                  printf("Case #%d: %d\n",d,c);
                  d++;
                  break;
                  }
            }      
      
      }
}
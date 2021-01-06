#include<stdio.h>
int main()
{
      int n,b,h,w;
      scanf("%d %d %d %d\n",&n,&b,&h,&w);
      int i,j,k,flag=b;
      int a[h][w],c[h];
      for(i=0;i<h;i++)
      {
            scanf("%d",&c[i]);
            for(j=0;j<w;j++)
            {
                  scanf("%d",&a[i][j]);
            }
      }
      k=b;
      int v; 
      int u=0;
      for(i=0;i<h;i++)     
      {
            flag=b;
            v=0;
            for(j=0;j<w;j++)
            {
                  if(a[i][j] >= n)
                  {
                        if(c[i]*n <= flag)
                        {
                              flag=c[i]*n;
                              v=1;
                        }      
                  }
            }
            if(flag <= k && v==1)
            {
                  k=flag;
                  u++;
            }
      }
      if(u==0)
      {
            printf("stay home");
            
      }
      else
      {
            printf("%d",k);
      }
      
}
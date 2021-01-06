#include<stdio.h>
double average(int n)
{
      int a[n],i;
      double avg=0,count=0;
      for(int i=0;i<n;i++)
      {
            scanf("%d",&a[i]);
            avg += a[i];
      }
      avg /= n;
      for(i=0;i<n;i++)
      {
            if (avg < a[i])
            {
                  count++;
            }
      }
      return ((count/n)*100);
     
}
int main()
{
      int n,c;
      scanf("%d",&c);
      while(c--)
      {
            scanf("%d",&n);
            printf("%.3f%%\n",average(n));
      }
     return 0;
}

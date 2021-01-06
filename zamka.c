#include<stdio.h>
int digit(int z)
{     
      int sum=0;
      while(z)
            {
            sum += z%10;
            z /= 10;
            }
      return sum;      
}
int main()

{
      int l,d,x,i,sum=0;
      scanf("%d%d%d",&l,&d,&x);
      for(i=l;i<=d;i++)
      {
            sum=digit(i);
            if(x==sum)
            {
                  printf("%d",i);
                  break;
            }
           
      }
    
     for(i=d;i>=l;i--) {
           sum=digit(i);
           if(x==sum){
                 printf("\n%d",i);
                 break;
           }
     }
}
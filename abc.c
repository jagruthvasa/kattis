#include<stdio.h>
#include<string.h>
int main()
{
      int a[3],b=1,c,d,e,f,z,i;
      char s[3];

      for(int i=0;i<3;i++)
      {
      scanf("%d",&a[i]);
      }

      scanf("%s",s);

      d=a[0]>a[1]? (a[0]>a[2] ? a[0] : a[2]) : (a[1]>a[2] ? a[1] : a[2]);

      for(i=0;i<3;i++)
      {
         if(a[i] != d && b==1)
         {
                c=a[i];
                b++;
         }
         if(a[i] != d && a[i] != e )
         {
               z=a[i];
         }
      }   
      if(c>z)
      {
            e=c;
            f=z;
      }
      else
      {
            e=z;
            f=c;
      }
      
      for(i=0;i<3;i++)
      {
            if(s[i] == 'A')
            {
                  printf("%d ",f);
            }
            else if(s[i] == 'B')
            {
                  printf("%d ",e);
            }
            else
            {
                  printf("%d ",d);
            }
           
      }
}
#include<stdio.h>
#include<string.h>
int main()
{
      char a[251];
      scanf("%s",a);
      for(int i=0;i<strlen(a);i++)
      {
            if (a[i] == a[i-1])
            {
                  continue;
            }
            else
            {
                  printf("%c",a[i]);
            }
            

      }
}
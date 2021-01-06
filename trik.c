#include<stdio.h>
#include<string.h>
int main()
{
      int b=1,i;
      char s[50];
      scanf("%s",s);
      for(i=0;i<strlen(s);i++)
      {
            if(s[i]=='A')
            {
                  if(b==1)
                  {
                        b=2;
                  }
                  else if(b==2)
                  {
                        b=1;
                  }         
                  else
                  {
                        continue;
                  }
            }
            else if(s[i]=='B')
            {
                  if(b==2)
                  {
                        b=3;
                  }
                  else if(b==3)
                  {
                        b=2;
                  }
                  else
                  {
                        continue;
                  }
            }
            else
            {
                  if(b==1)
                  {
                        b=3;
                  }
                  else if(b==3)
                  {
                        b=1;
                  }
                  else
                  {
                        continue;
                  }
                  
            }
      }
      printf("%d",b);
}
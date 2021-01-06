#include<stdio.h>
#include<string.h>
int main()
{
      int i;
      char s[101];
      scanf("%[^\n]s",s);
      for(i=0;i<strlen(s);i++)
      {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                  printf("%c",s[i]);
                  if(s[i+1]=='p'&&s[i+2]==s[i])
                  {
                        i += 2;
                  }
            }
            else
            {
                  printf("%c",s[i]);
            }
      }
}
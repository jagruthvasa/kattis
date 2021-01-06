#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
      char s[100];
      int j=0;
      for(int i=1;i<6;i++)
      {
            scanf("%s",s);
            if(strstr(s,"FBI"))
            {
                  printf("%d\n",i);
                  j++;
            }
      }
      if(j == 0)
      {
            printf("HE GOT AWAY!");
      }
     
}     
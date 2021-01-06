#include<stdio.h>
#include<string.h>
int main()
{
      char s[10002];
      scanf("%[^\n]s",s);
      for(int d=0;d<strlen(s);d++)
      {
            if (s[d] == 'a'|| s[d] == 'A')
            {
                  printf("@");
            }
            else if(s[d] == 'b' || s[d] == 'B')
            {
                  printf("8");
            }
            else if(s[d] == 'c' || s[d] == 'C')
            {
                  printf("(");
            }
             else if(s[d] == 'd' || s[d] == 'D')
            {
                  printf("|)");
            }
             else if(s[d] == 'e' || s[d] == 'E')
            {
                  printf("3");
            }
             else if(s[d] == 'f' || s[d] == 'F')
            {
                  printf("#");
            }
             else if(s[d] == 'g' || s[d] == 'G')
            {
                  printf("6");
            }
            else if(s[d] == 'h' || s[d] == 'H')
            {
                  printf("[-]");
            }
             else if(s[d] == 'i' || s[d] == 'I')
            {
                  printf("|");
            }
             else if(s[d] == 'j' || s[d] == 'J')
            {
                  printf("_|");
            }
             else if(s[d] == 'k' || s[d] == 'K')
            {
                  printf("|<");
            }
            else if(s[d] == 'l' || s[d] == 'L')
            {
                  printf("1");
            }
             else if(s[d] == 'm' || s[d] == 'M')
            {
                  printf("[]\\/[]");
            }
              else if(s[d] == 'n' || s[d] == 'N')
            {
                  printf("[]\\[]");
            }
              else if(s[d] == 'o' || s[d] == 'O')
            {
                  printf("0");
            }
             else if(s[d] == 'p' || s[d] == 'P')
            {
                  printf("|D");
            }
             else if(s[d] == 'q' || s[d] == 'Q')
            {
                  printf("(,)");
            }
             else if(s[d] == 'r' || s[d] == 'R')
            {
                  printf("|Z");
            }
             else if(s[d] == 's' || s[d] == 'S')
            {
                  printf("$");
            }
             else if(s[d] == 't' || s[d] == 'T')
            {
                  printf("']['");
            }
             else if(s[d] == 'u' || s[d] == 'U')
            {
                  printf("|_|");
            }
            else if(s[d] == 'v' || s[d] == 'V')
            {
                  printf("\\");
                  printf("/");
            }
              else if(s[d] == 'w' || s[d] == 'W')
            {
                  printf("\\");
                  printf("/");
                  printf("\\");
                  printf("/");
            }
             else if(s[d] == 'x' || s[d] == 'X')
            {
                  printf("}{");
            }
            else if(s[d] == 'y' || s[d] == 'Y')
            {
                  printf("`/");
            }
             else if(s[d] == 'z' || s[d] == 'Z')
            {
                  printf("2");
            }
            else
            {
                  printf("%c",s[d]);
            }
            
      }
}
#include<stdio.h>
#include<string.h>
int main()
{
      char a[1001],b[1001];
      scanf("%s",a);
      scanf("%s",b);
      printf(strlen(a) < strlen(b) ? "no\n" : "go\n");
}
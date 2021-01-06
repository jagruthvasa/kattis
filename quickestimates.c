#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char b[102];
    while (n-- > 0)
    {
      
        scanf("%s", b);
        printf("%ld\n", strlen(b));
    }
}
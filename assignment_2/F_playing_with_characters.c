#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch, *s, *sen;
    s = (char *)malloc(sizeof(char) * 1024);
    sen = (char *)malloc(sizeof(char) * 1024);
    scanf("%c%s\n%[^\n]s", &ch, s, sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);

    return 0;
}
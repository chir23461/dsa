#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    int e, f;
    float g, h;

    e = a + b;
    f = a - b;

    g = c + d;
    h = c - d;

    printf("%d %d \n", e, f);
    printf("%0.1f %0.1f", g, h);

    return 0;
}
#include <math.h>
#include <stdio.h>
int main()
{
    int r;
    float a, s;
    scanf("%d", &r);
    a = 3.14 * pow(r, 2);
    s = 2 * 3.14 * r;
    printf("%f%f", a, s);
}
#include <stdio.h>
float PI = 3.14;

int main()
{
    float r,a;

    scanf("%f", &r);
    a = PI * (r*r);

    printf("[%.2f]",a);

   return 0;
}
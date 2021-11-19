#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float a, b , m;

    a = -15;
    b = -10;

    float fa,fm;

    m = (a+b)/2;

    while (1){


        fa = pow(a,3)+(12 * pow(a, 2)) + 1;
        fm = pow(m,3)+(12 * pow(m, 2)) + 1;

        if (fa * fm < 0)
            b = m;
        else
            a = m;

        m = (a+b)/2;

        if (b - a < 0.00001)
            break;
    }

    printf("%f -> %f\n", a, b);
}

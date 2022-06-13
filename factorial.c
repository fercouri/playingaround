#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void funcao1(float x)
{
    int y;

    float E = 2, e = 0, t = 0;

    printf("1 + 1/1! ");

    for(y = 2; y > 0; y++)
    {
        float n, f = 1, ff = 1;
        for (n = y; n > 0; n--)
        {
            f = f * n;
        }
        e = 1/f;
        for (n = y + 1; n > 0; n--)
        {
            ff = ff * n;
        }
        t = 1/ff;
        E = E + e;
        printf("+ 1/%d! ", y);
        if ((e-t) < x)
        {
            break;
        }
    }

    printf("= %.3f", E);

    return;
}

int main()
{
    float x;

    scanf("%f", &x);

    funcao1(x);

    return 0;
}
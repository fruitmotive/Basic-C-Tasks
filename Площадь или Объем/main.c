#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R, A;
    double B;
    scanf ("%d %d", &A, &R);
    if (A)
    {
        B = (4./3.)*3.14*R*R*R;
        printf ("V = ");
        printf ("%lf\n",B);
    }
    else
    {
        B = 3.14*R*R;
        printf ("S = ");
    printf ("%lf\n",B);

    }
}


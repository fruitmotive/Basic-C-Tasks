#include <stdio.h>
#include <math.h>
int main()
{
double a,b,e,S,R,n,j;
printf("a = ");
scanf ("%lf",&a);
printf("b = ");
scanf ("%lf",&b);
printf("e = ");
scanf ("%lf",&e);
n=1;
S = ((b-a)/n)*b*b;
R = ((b-a)/(2*n))*b*b + ((b-a)/(2*n))*(b - (b-a)/(2*n))*(b - (b-a)/(2*n));
n=2;
    while (fabs(S-R) > e)
{
    S=R;
    R=0;
    for (j=0;j<=2*n-1;j++)
    {
R = R + ((b-a)/(2*n))*(b - j*((b-a)/(2*n)))*(b - j*((b-a)/(2*n)));
    }
    n=n*2;
    printf ("integral(method) = %lf\n",R);
}
printf ("integral(method) = %lf\n",R);
printf ("integral(calc) = %lf\n",b*b*b/3-a*a*a/3);
}

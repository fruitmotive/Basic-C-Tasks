#include <stdio.h>
#include <math.h>
int main()
{
double a,b,e,S,R,n,j,Q;
printf("a = ");
scanf ("%lf",&a);
printf("b = ");
scanf ("%lf",&b);
printf("e = ");
scanf ("%lf",&e);
S = (b-a)*(a*a + b*b)/2;
R = (a*a + b*b)/2;
Q=0;
n=2;
    while (fabs(S-Q) > e)
{
    Q = S;
    for (j=1;j<n;j=j+2)
    {
R = R + (b - j*(b-a)/n)*(b - j*(b-a)/n);
    }
S = R*(b-a)/n;
n=n*2;
}
printf ("integral(method) = %lf\n",S);
printf ("integral(calc) = %lf\n",b*b*b/3-a*a*a/3);
}


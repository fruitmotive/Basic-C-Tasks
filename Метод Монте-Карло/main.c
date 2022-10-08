#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double n,a,b,i,k,x,y,s;
int main()
{
    printf("n = ");
    scanf ("%lf", &n);
    printf("a = ");
    scanf ("%lf", &a);
    printf("b = ");
    scanf ("%lf", &b);
    srand(time(NULL));
    k=0;
    if (fabs(b)>fabs(a))
    {
    for (i=0;i<n;i++)
    {
        x=(b-a)*((double)rand()/RAND_MAX)+a;
        y=(b*b)*((double)rand()/RAND_MAX);
        k=k+(y<=x*x);
    }
    s=(b-a)*b*b*k/n;
    }
    else
    {
    for (i=0;i<n;i++)
    {
        x=(b-a)*((double)rand()/RAND_MAX)+a;
        y=(a*a)*((double)rand()/RAND_MAX);
        k=k+(y<=x*x);
    }
    s=(b-a)*a*a*k/n;
    }

printf ("integral(method) = %lf\n",s);
printf ("integral(calc) = %lf\n",b*b*b/3-a*a*a/3);
}

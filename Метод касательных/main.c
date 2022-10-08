#include <stdio.h>
#include <math.h>
int main()
{double a,e; int c=0;
printf("The first approximation = "); scanf ("%lf",&a);
printf("e = "); scanf ("%lf",&e);
while (fabs(a*a-4) > e)
{a=a-(a*a-4)/(2*a); c++;}
printf ("Root = %lf\n",a);
printf ("Steps: %d\n",c);}

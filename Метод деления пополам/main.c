#include <stdio.h>
#include <math.h>
int main()
{double a,b,e,d;
int c;
printf("a = "); scanf ("%lf",&a);
printf("b = "); scanf ("%lf",&b);
printf("e = "); scanf ("%lf",&e);
c=0;
if (a*a-4==0)
{printf ("root = %lf\n",a);
c++;}
else if (b*b-4==0)
{printf ("root = %lf\n",b);
c++;}
else {while (fabs(b-a)>e)
{d=a+(b-a)/2;
if ((d*d-4)*(a*a-4)<=0)
{b=d;}
else
{a=d;}
c++;}
printf ("root = %lf\n",d);}
printf ("steps: %d\n",c);}

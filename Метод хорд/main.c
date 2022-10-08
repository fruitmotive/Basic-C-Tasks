#include <stdio.h>
#include <math.h>
int main()
{double a,b,e,d;
int c;
printf("a = "); scanf ("%lf",&a);
printf("b = "); scanf ("%lf",&b);
printf("e = "); scanf ("%lf",&e);
c=0;
d=0;
if (a*a-4==0)
{printf ("root = %lf\n",a);
c++;}
else if (b*b-4==0)
{printf ("root = %lf\n",b);
c++;}
else {if (fabs(b)>fabs(a))
{while (fabs(d*d-4)>e)
{d=a+(4-a*a)*(b-a)/(8-a*a+b*b);
a=d;
c++;}
printf ("root = %lf\n",d);}
else
{
{while (fabs(d*d-4)>e)
{d=b-fabs(4-b*b)*(b-a)/fabs(8-a*a+b*b);
b=d;
c++;}
printf ("root = %lf\n",d);}}}
printf ("steps: %d\n",c);}


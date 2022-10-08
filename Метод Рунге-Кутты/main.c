#include <stdio.h>
#include <math.h>
int main()
{double a,dx,y1,y2,k1,k2,k3,k4,x;
FILE*s;

printf ("input of the limit: "); scanf ("%lf",&a);
printf ("input of the step: "); scanf ("%lf",&dx);
printf ("input of the y10: "); scanf ("%lf",&y1);
printf ("input of the y20: "); scanf ("%lf",&y2);

s = fopen("diffur3.txt", "w");
fprintf(s,"%lf ",x); fprintf(s,"%lf \n",y1);
for (x=dx;x<a+dx*0.1;x=x+dx)
{k1=-sin(y1);
k2=-sin(y1+dx*k1/2);
k3=-sin(y1+dx*k2/2);
k4=-sin(y1+dx*k3);
y2=y2+dx*(k1+2*k2+2*k3+k4)/6;
y1=y1+dx*(y2+2*y2+2*y2+y2)/6;
fprintf(s,"%lf ",x);
fprintf(s,"%lf \n",y1);}
fclose(s);}


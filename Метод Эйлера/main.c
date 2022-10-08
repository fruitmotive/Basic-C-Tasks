#include <stdio.h>
#include <math.h>
int main()
{double a,dx,x=0,y=1;
FILE*f; FILE*g;

printf ("input of the limit: "); scanf ("%lf",&a);
printf ("input of the step: "); scanf ("%lf",&dx);

f = fopen("diffur1.txt", "w");
fprintf(f,"%lf ",x); fprintf(f,"%lf ",y); fprintf(f,"%lf \n",exp(x));
for (x=dx;x<a+dx*0.1;x=x+dx)
{fprintf(f,"%lf ",x);
y=y+dx*y;
fprintf(f,"%lf ",y);
fprintf(f,"%lf \n",exp(x));}
fclose(f);

x=0;
y=1;

g = fopen("diffur2.txt", "w");
fprintf(g,"%lf ",x); fprintf(g,"%lf ",y); fprintf(g,"%lf \n",exp(-x));
for (x=dx;x<a+dx*0.1;x=x+dx)
{fprintf(g,"%lf ",x);
y=y-dx*y;
fprintf(g,"%lf ",y);
fprintf(g,"%lf \n",exp(-x));}
fclose(g);}


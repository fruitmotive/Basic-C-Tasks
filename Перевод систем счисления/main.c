#include <stdio.h>
#include <stdlib.h>
int main()
{int N10,S,C,i,ADD;
char NS;
printf("Number in 10 = ");
scanf ("%d",&N10);
printf("System = ");
scanf ("%d",&S);
ADD=1;
i=N10;
while (i>=S)
{ADD=ADD*S;
i=i/S;}
printf ("Number in System = ");
while (ADD>0)
{C=N10/ADD;
if (C>9)
{NS='a'-10+C;}
else
{NS='0'+C;}
printf ("%c",NS);
N10=N10%ADD;
ADD=ADD/S;}}


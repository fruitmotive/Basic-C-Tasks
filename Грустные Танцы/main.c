#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

int main()
{int *a;
int *b;
int i,N,b1,b2,a1,a2,c;

printf("The number of dancers: "); scanf("%d",&N);
a = (int *)malloc(N*sizeof(int));
b = (int *)malloc(N*sizeof(int));

for (i=0;i<N;i++)
{scanf ("%d", &a[i]);}

for (i=0;i<N;i++)
{scanf ("%d", &b[i]);}

for (i=0;a[i]!=b[1];i++)
{c=i;}

for (i=0;i<c;i++)
{b1=b1+b[i]*pow(10,c-i-1);}
printf("%d\n",b1);
for (i=c;i<N;i++)
{a1=a1+a[i]*pow(10,N-i-1);}
printf("%d\n",a1);
for (i=0;i<c;i++)
{a2=a2+a[i]*pow(10,c-i-1);}
printf("%d\n",a2);
for (i=c;i<N;i++)
{b2=b2+b[i]*pow(10,N-i-1);}
printf("%d\n",b2);
if (b1==a1&&b2==a2)
printf("Yes");
else
printf("No");

free(a);
free(b);}



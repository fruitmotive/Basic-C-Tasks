#include <stdio.h>
int main()
#define N 6
{int a[N], b[N/2], c[N/2], i, j, k, q, w, z;
printf ("1a[N]: ");
srand(time(NULL));

for (k=0,i=0;k<N/2;i++,k++)
{a[k]=rand()%90+10;
b[i]=a[k];
printf ("%d ",a[k]);}
for (k=N/2,j=0;k<N;k++,j++)
{a[k]=rand()%90+10;
c[j]=a[k];
printf ("%d ",a[k]);}

for (i=0;i<N/2-1;i++)
{for (q=i+1;q<N/2;q++)
{if (b[i]>b[q])
{z=b[i]; b[i]=b[q]; b[q]=z;}}}

for (j=0;j<N/2-1;j++)
{for (w=j+1;w<N/2;w++)
{if (c[j]>c[w])
{z=c[j]; c[j]=c[w]; c[w]=z;}}}

printf ("\nb[N/2]: ");
for (i=0;i<N/2;i++)
{printf ("%d ",b[i]);}
printf ("\nc[N/2]: ");
for (j=0;j<N/2;j++)
{printf ("%d ",c[j]);}

i=0, j=0, k=0;

for (k=0;(i<N/2 && j<N/2);k++)
{if (b[i]<c[j])
{a[k]=b[i]; i++;}
else
{a[k]=c[j]; j++;}}

while(k<N)
{if (i<N/2)
{a[k]=b[i]; i++;}
if (j<N/2)
{a[k]=c[j]; j++;}
k++;}

printf ("\n2a[N]: ");
for (i=0;i<N;i++)
{printf ("%d ",a[i]);}}



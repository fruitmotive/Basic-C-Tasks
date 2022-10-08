#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{int *a;
int i,N,j,k;
FILE*f;
srand (time(NULL));

printf("demension: "); scanf("%d",&N);
a = (int *)malloc(N*sizeof(int));

printf("a[n]: ");
for (i = 0; i < N; i++)
{a[i] = rand() % 1000 + 1;
printf("%d ", a[i]);}

for (i=0;i<N-1;i++)
{for (j=i+1;j<N;j++)
{if (a[i]>a[j])
{k=a[i];
a[i]=a[j];
a[j]=k;}}}

printf("\na[n](sorted): ");
for (i = 0; i < N; i++)
{printf("%d ", a[i]);}

f = fopen("massive.txt", "w");
for(i=0;i<N;i++)
{fprintf(f,"%d ",i+1);
fprintf(f,"%d \n",a[i]);}
fclose(f);

free(a);}



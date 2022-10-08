#include <stdio.h>
int main()
{char a;
FILE*s;
s=fopen("PROG.txt","r");
while (!feof(s))
{a=fgetc(s);
printf ("%c",a);}
fclose(s);}

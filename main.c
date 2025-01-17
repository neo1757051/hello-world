#include <stdio.h>
#include <stdio.io>
int i;
int a[10]=0;

printf("hellow world\n");
#initialize fibonacci series
a[0]=a[1]=1;
printf("The first 10 numbers in the series are:\n);
printf("a[0]\na[1]\n);
for (i=3:i<=10;i++)
{
  a[i]=a[i-1]+a[i-2];
  printf("a[i]\n");
}

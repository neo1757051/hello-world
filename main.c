#include <stdio.h>
int main(){
  
  int i;
  int a[10] = 0;

  printf("hellow world\n");
  //initialize fibonacci series
  a[0] = a[1] = 1;
  printf("The first 10 numbers in the series are:\n);
  printf("%d\n%d\n", a[0], a[1]) ;
  for (i=3:i<=9;i++)
  {
    a[i]=a[i-1]+a[i-2];
    printf("a[i]\n");
  }
return 0;
}

#include <stdio.h>
#include <conio.h>
main()
{
 int n,f;
 f=1;
 printf("Enter a number:");
 scanf("%d",&n);
 while(n>0)
 {
  f=f*n;
  n=n-1;
 }
 printf("Factorial is %d",f);
}

#include <stdio.h>
#include <conio.h>
main()
{
 int n;
 printf("Enter a number=");
 scanf("%d",&n);
 if (n>0)
 {
  printf("Number is positive");
 }
 else if(n<0)
 {
  printf("Number is negative");
 }
 else
 {
  printf("Number is zero");
 }
}

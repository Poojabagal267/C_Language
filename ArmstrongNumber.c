#include <stdio.h>
#include <conio.h>
main()
{
 int a,b,rem,sum;
 sum=0;
 printf("Enter a number:");
 scanf("%d",&a);
 b=a;
 while(a>0)
 {
  rem= a%10;
  sum=sum+(rem*rem*rem);
  a=a/10;
 }
 if(sum==b)
 printf("Number is Armstrong");
 else
 printf("Number is not Armstrong");
}

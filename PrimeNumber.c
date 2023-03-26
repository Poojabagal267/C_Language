#include <stdio.h>
#include <conio.h>
main()
{
 int n,i,flag;
 i=2;
 flag=0;
 printf("Enter a number");
 scanf("%d",&n);
 while(i<=n/2)
 {
  if(n%i==0)
  {
   flag=1;
   break;
  }
  i=i+1;
 }
 if(flag==0)
 printf("Number is prime");
 else
 printf("Number is not prime");
}

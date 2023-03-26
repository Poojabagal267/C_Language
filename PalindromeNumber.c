#include <stdio.h>
#include <conio.h>
main()
{
 int n,rev_no=0,rem,original_no;
 printf("Enter a number:");
 scanf("%d",&n);
 original_no=n;
 while(n!=0)
 {
  rem=n%10;
  rev_no=rev_no*10+rem;
  n=n/10;
 }
 if(original_no==rev_no)
 printf("Number is palindrome");
 else
 printf("Nuber is not palindrome");
}

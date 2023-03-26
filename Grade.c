#include <stdio.h>
#include <conio.h>
main()
{
 int n;
 printf("Enter the percentage=");
 scanf("%d",&n);
 if(n>=80)
 {
  printf("Grade A");
 }
 else if(n>=60)
 {
  printf("Grade B");
 }
 else if(n>=40)
 {
  printf("Grade C");
 }
 else
 {
  printf("fail");
 }
}

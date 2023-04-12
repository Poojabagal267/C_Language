//Write a program in C that uses a for loop
//to print out the multiplication table of a given number 
//entered by the user.


#include <stdio.h>
void main()
{
  int num,i,temp;
  printf("Enter the number:");
  scanf("%d",&num);
  printf("Multiplication table:\n");
  for(i=1;i<=10;i++){
    temp=num*i;
    printf("%d\n",temp);
  }
}

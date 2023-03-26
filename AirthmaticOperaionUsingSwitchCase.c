#include <stdio.h>
#include <conio.h>
main()
{
 int a,b,res,choice;
 printf("............\n");
 printf("1:Addition\n");
 printf("2:Subtraction\n");
 printf("3:Multiplication\n");
 printf("4:Division\n");
 printf("select your choice:");
 scanf("%d",&choice);
 
    if(choice>=1 && choice<=4)
    {
     printf("Enter two numbers:");
     scanf("%d %d",&a,&b);
    }

    switch(choice)
    {
 
      case 1:res=a+b;
         printf("Addition is %d",res);
         break;
  
      case 2:res=a-b;
         printf("Subtraction is %d",res);
         break;
 
      case 3:res=a*b;
         printf("Multiplication is %d",res);
         break;
 
      case 4:res=a/b;
         printf("Division is %d",res);
         break;
  
      default:printf("Invalid choice");
    }
}

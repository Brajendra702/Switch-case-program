#include<stdio.h>
void main()
{
   int a;
   //declare int variable
   printf("Enter number from 1 to 5");
   //taking input from user
   scanf("%d",&a);
   //Store in variable a
   switch(a)
   //switch statement
   {
   case 1:
    printf("Pizza\nRs 239");
    break;
   case 2:
    printf("Burger\nRs 129");
    break;
   case 3:
    printf("Pasta\nRs 179");
    break;
   case 4:
    printf("French Fries\nRs 99");
    break;
   case 5:
    printf("Sandwich\nRs 149");
    break;
    //default case work when all cases are false
   default:
    printf("Please Enter valid number");

   }

}

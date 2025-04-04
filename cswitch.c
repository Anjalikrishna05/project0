#include <stdio.h>
int main()
{
  int num1;
  int num2;

  char op;
  int sum;
  printf("Enter the Operator +,-,*,/:");
  scanf(" %c", &op);
  printf("Enter first number:");
  scanf("%d", &num1);
  printf("Enter second number:");
  scanf("%d", &num2);


  switch (op)
  {
  case '+':
    sum = num1 + num2;
    printf("The sum = %d",sum);
    break;
  case '-':
    sum = num1 - num2;
    printf("The difference = %d",sum);
    break;
  case '*':
    sum = num1 * num2;
    printf("The product = %d",sum);
    break;
  case '/':
    sum = num1 / num2;
    printf("The division = %d",sum);
    break;


  default:
    printf("You Entered a invaid operator");
    break;
  }
  return 0;
}       







/*

#include <stdio.h>
int main()

{
  int mark;
  printf("Enter ur mark:");
  scanf("%d", &mark);

  if (mark > 100)
  {
    printf("ur mark is invlid");
  }

  else

    
  {

      switch (mark/ 10)

  {

  case 10:
  case 9:
    printf("A+ grade");
    break;

  case 8:
    printf("A grade");
    break;

  case 7:
    printf("B+ grade");
    break;

  case 6:
    printf("B grade");
    break;

  case 5:
    printf("C+grade");
    break;

  case 4:
    printf("C grade");
    break;

  case 3:
    printf("D+grade");
    break;

  case 2:
    printf("D grade");
    break;

  default:
    printf("UR FAILED");
    break;
  }
  return 0;
}}*/










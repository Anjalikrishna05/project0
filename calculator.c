#include<stdio.h>
int main()
  {
    double num1;
    double num2;
    char operator;
    char op;
     printf("Enter first number:");
     scanf("%lf",&num1);
     printf("Enter second number:");
     scanf("%lf",&num2);
     printf("Enter the Operator (+,-,*,/):");
     scanf("%c",&op);
       if(op='+'){
      printf("Answer is %lf",num1+num2);
    }
       else if (op=='-'){
      
      printf("Answer is %lf",num1-num2);
    } 
       else if (op=='*'){
      printf("Answer is %lf",num1*num2);
    }
        else if(op=='/'){
        printf("Answer is %lf",num1/num2);}

        else{

         printf("invalid"); 
        }
  return 0;

  }

    
 

  

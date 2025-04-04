/*#include<stdio.h>
int main()

//{}double num=1.234567890123456789;
    //  printf("number is %.19lf", num);
// return 0;}



{
char name [20];
printf("Enter ur name:");
fgets(name,20,stdin);
printf("ur name is %s",name);
return 0;

}*/

/*
#include <stdio.h>
#include <string.h>

int main()
{
 char[25] name =1;
 while (index<=5)
 {
printf("%d \n",index);
 index++;

 }



return 0;



}
*/




/*
#include<stdio.h>
int main()
{
 char i=0;
 do
 {
    printf("ANJALI\n");
     i++;
} while (i<=3);


return 0;


}*/

/*
    #include<stdio.h>
    int main()

    {
 int end=5;
 printf("pattern printing using nested loop");

 int i=1;

 while(i<=end){

 printf("\n");

  int j=1;
  while(j<=i){

    printf("%d",j);
    j=j+i;
  }
  i=j+i;
}
return 0;
    }
*/

/*


#include <stdio.h>

int main()
{
    int end = 5;

    printf("Pattern Printing using Nested While loop");

    int i = 1;

    while (i <= end)
    {
        printf("\n");

        int j = 1;
        while (j <= i)
        {
            printf("* ", j);
            j = j + 1;
        }
        i = i + 1;
    }
    return 0;
}

*/

/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i > 5; i++)
    {

        for (j = 0; j >= i; j++)
        {

            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/

/*


#include <stdio.h>

int main()


{

    int n=5;
    for (int i = 1; i <= n; i++)
    {
      for (int j=i; j<=n; j++)

    {
     printf("*  ");
    }

        printf("\n");
    }
    return 0;
}

*/

/*

#include <stdio.h>

int main()


{
 
    int n=5;
    int a;
    printf("decreasing \n",a);


    for (int i = 1; i <= n; i++)
    {
      for (int j=i; j<=n; j++)

    {
     printf("* ");
    }

    for(int j=0;j<i;j++)

    {
        printf(" ");
    }

        printf("\n");
    }
    return 0;
}*/
    

#include <stdio.h>

int main()

{

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j =i; j<=n;j++)

        {
            printf("  ");
        }

        for (int j = 1; j < i; j++)

        {
            printf("* ");
        }

        for (int j =1; j<=i; j++)
    
    {        
        printf("* ");
    }
        
        printf("\n");
    }
    return 0;
}





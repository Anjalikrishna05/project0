#include<stdio.h>
int main(){

char charactername[]="anjali";
int characterage=19;
int age;
double gpa;

/*
 printf("there was a girl named %s.\n" ,charactername);*/
 printf("she was %d years old. \n",characterage);
 printf("Enter ur age:");
 scanf("%d",&age);
 printf("Enter  ur gpa:");
 scanf("%lf",&gpa);
 printf("Your gpa is %.2lf:", gpa);
 return 0;
}


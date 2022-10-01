/* Calculating factorial of an integer using recursion */
/* Data Structures Using C by UDIT AGARWAL */
#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int n;
long int factorial(int n);
printf("Enter the number n= ");
scanf("%d",&n);
printf("\n factorial is=%ld", factorial (n));
getch();
}
long int factorial (int n)
{
if(n<=1)
return(1);
else
return(n*factorial(n-1));
}

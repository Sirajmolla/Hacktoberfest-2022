/* Program to find GCD of two positive numbers */
/* Data Structures Using C by UDIT AGARWAL */

#include<stdio.h>
#include<conio.h>

int gcd (int m, int n)
{
 if (n == 0)
 {
 return m;
 }
 if (m < n)
 {
 return gcd (n, m);
 }
 return (gcd (n, m%n));
 }

void main ()
 {
 clrscr();
 int m, n, result;
 printf ("Enter two numbers:\n");
 scanf ("%d %d", &m, &n);
 result = gcd (m,n);
 printf("The GCD (%d, %d)= %d\n",m,n, result);
 getch();
 }

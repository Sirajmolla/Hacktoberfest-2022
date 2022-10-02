/* Decimal to binary conversion uses stack */
/* Data Structures Using C by UDIT AGARWAL */
#include <stdio.h>
#include <conio.h>
void main ( )
{
clrscr();
int stack[30], dec, rem, top=0;
printf ("\nEnter decimal number:\n");
scanf("%d", &dec);
while (dec!=0)
{
rem=dec%2;
top++;
stack[top]=rem;
dec=dec/2;
}
printf ("\nThe equivalent binary number is\n");
for (; top>0; top--)
{
printf ("%d", stack[top]);
}
getch ( );
}

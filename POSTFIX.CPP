/* Program to Evaluate Postfix Notation */
/* Data Structures Using C by UDIT AGARWAL */
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main( )
{
char S[80];
int i, top=-1, n, x=0, y=0, stack[80];
clrscr ( );
printf ("\n Enter the valid postfix notation :");
gets(S);
n = strlen(S);
printf ("The value of the postfix notation is :");
for (i=0;i<n; i++)
{
switch (S[i])
{
case '+' :
y=stack[top];
x=stack[top-1];
top = top-1;
x=x+y;
stack[top] = x;
break;
case '-' :
y=stack[top];
x=stack[top-1];
top = top-1;
x=x-y;
stack[top] = x;
break;
case '*' :
y=stack[top];
x=stack[top-1];
top = top-1;
x=x*y;
stack[top] = x;
break;
case '/' :
y=stack[top];
x=stack[top-1];
top = top-1;
x=x/y;
stack[top] = x;
break;
default :
top = top+1;
if (S[i]>=48 && S[i]<=57)
x = S[i] - 48;
stack[top] = x;
x=0;
}
}
printf("%d", stack[top]);
getch( );
}

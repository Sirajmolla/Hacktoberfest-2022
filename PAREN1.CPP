/* Program to check nesting of parenthesis using Stack */
/* Data Structures Using C by UDIT AGARWAL */
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 20
#define true 1
#define false 0

int top = -1;
int stack[MAX];
push(char);
char pop( );

void main( )
{
	clrscr();
	char exp [MAX],temp;
	int i, valid=true;
	printf ("\nEnter an algebraic expression :\n");
	gets(exp);
	for(i=0;i<strlen(exp); i++)
	{
		if(exp[i]=='('|| exp[i]=='{'||exp[i]=='[')
		push(exp[i]);
		if(exp[i]==')' || exp[i]=='}'||exp[i]==']')
		    if(top ==-1) /* stack empty */
			valid=false;
		    else
		     {
			temp=pop ( );
			if (exp[i]==')'&&(temp=='{'||temp=='['))
			valid=false;
			if (exp[i]=='}'&&(temp=='('|| temp=='['))
				valid=false;
			if (exp[i]==']'&&(temp=='('|| temp=='{'))
				valid=false;
			}
	  }

	if (top>=0) /*stack not empty */
		valid=false;
	if (valid==true)
		printf("Valid expression\n");
	else
		printf("Invalid expression\n");
getch();
}

push(char item)
{
	if(top == (MAX-1))
		printf("Stack overflow\n");
	else
	{
	top=top+1;
	stack[top] = item;
	}
}

char pop ( )
{
	if (top == - 1)
		printf ("Stack underflow\n");
	else
		return (stack [top--]);
}

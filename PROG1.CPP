/* Operations performed on the stack */
/* Data Structures Using C by UDIT AGARWAL */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define maxsize 30
int stack [maxsize], top;
void push ( );
void pop ( );
void display ();

void main ( )
{
clrscr();
int ch=1; top=-1;
while(ch)
{
	printf ("\n1 Push");
	printf ("\n2 Pop");

	printf ("\n enter your choice");
	scanf ("%d", &ch);

	switch(ch)
	{
	case 1:
	push ( );
	break;

	case 2:
	pop ( );
	break;

	default:
	exit (0);
	}
    }
  getch ( );
}

void push ( )
{
int no;
if (top==maxsize-1)
{
printf ("\n stack overflow");
return;
}
top++;
printf ("\n Enter number: \n");
scanf ("%d", &no);
stack[top]=no;
printf("\nElements in stack are:\n");
display();
}

void pop ( )
{
int no;
if (top==-1)
{
printf ("\n stack underflow");
return;
}
else
{
top--;
printf("\nElements in stack are:\n");
display();
}
}
void display ()
{
int i;
for(i=0;i<=top;i++)
{
printf("%d\n",stack[i]);
}
}

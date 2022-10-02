/* Implementation of stack by Array */
/* Data Structures Using C by UDIT AGARWAL */
#include <stdio.h>
#include <conio.h>
#define MAX 50
int stack [MAX+1], top = 0;
void main ( )
{
clrscr();
void create ( ), traverse ( ), push ( ), pop ( );
create ( );
printf("\n Stack is :\n");
traverse ( );
push ( );
printf("After Push an element the stack is:\n");
traverse ( );
pop ( );
printf("After pop the element the stack is:\n");
traverse ( );
getch ( );
}
void create ( )
{
char ch;
do
{
top ++;
printf ("Input Element");
scanf ("%d", &stack[top]);
printf ("Press <Y> for more element \n");
ch = getch ( );
}
while (ch=='Y');
}
void traverse ( )
{
int i;
for (i=top; i>0; --i)
printf ("%d\n", stack[i]);
}
void push ( )
{
int m;
if (top==MAX)
{
printf ("Stack is overflow");
return;
}
printf ("Input New Element to Insert");
scanf ("%d", &m);
top++;
stack[top]=m;
}
void pop ( )
{
if (top==0)
{
printf ("Stack is underflow\n");
return;
}
stack[top]='\0';
top--;
}

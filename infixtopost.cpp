/* Convert Infix Expression into Postfix Expression */
/* Data Structures Using C by UDIT AGARWAL */
#include<stdio.h>
#include<conio.h>
#include<string.h>

char stack [30];
int top = -1;

void infix_to_postfix (char *);
void push(char);
char pop ( );

void main ( )
{
clrscr();
char infix [30];
printf ("\n Enter the infix expression:\n");
gets (infix);
infix_to_postfix (infix);
getch ( );
}

void push (char sym)
{
if (top >= 29)
{
printf ("\n stack is overflow");
getch ( );
return;
}
else
{
top = top + 1;
stack [top] = sym;
}
}

char pop ( )
{
char i;
if (top ==-1)
{
printf ("\n stack is empty");
return(0);
}

else
{
i = stack [top];
top = top - 1;
}
return (i);
}

int prec (char ch)
{
if (ch=='^')
{
return (5);
}
else if (ch=='*' || ch=='/')
{
return (4);
}
else if (ch=='+' || ch=='-')
{
return (3);
}
else
{
return (2);
}
}
void infix_to_postfix (char infix [ ])
{
int length;
static int index = 0, pos= 0;
char symbol, temp;
char postfix [50];
length = strlen(infix);

while (index < length)
{
symbol = infix[index];

switch (symbol)
{
case '(' : push (symbol);
break;

case ')' : temp = pop ( );
while (temp != '(')
{
postfix [pos]=temp;
pos++;
temp=pop ();
}
break;

case '+' :
case '-' :
case '*' :
case '/' :

while (prec (stack[top]) >= prec (symbol))
{
temp = pop();
postfix [pos]= temp;
pos++;
}
push (symbol);
break;
default:postfix [pos++] = symbol;
break;
}
index++;
}
while (top>=0)
{
temp = pop ( );
postfix [pos++] = temp;
}
postfix [pos++] = '\0';
printf("\nEquivalent postfix expression is:\n");
puts (postfix);
return;
}

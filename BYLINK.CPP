/* Implementation of stack by Link-list */
/* Data Structures Using C by UDIT AGARWAL */
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
struct node
{
int info;
struct node *link;
};
struct node *top;
void main()
{
clrscr();
void create(),traverse (),push ( ),pop ();
create ();
printf("\nstack is:\n");
traverse ();
push ();
printf("\nAfter push the element the stack is:\n");
traverse ();
pop ();
printf("\nAfter pop the element the stack is:\n");
traverse ( );
getch ( );
}

void create ( )
{
struct node *ptr, *cpt;
char ch;
ptr = (struct node *) malloc (sizeof (struct node));
printf ("Input first info");
scanf("%d",&ptr ->info);
ptr->link = NULL;
do
{
cpt=(struct node *) malloc (sizeof (struct node));
printf("\nInput next information\n");
scanf ("%d", &cpt->info);
cpt->link= ptr;
ptr=cpt;
printf("Press <Y/N> for more information");
ch=getche();
}
while (ch=='Y');
top = ptr;
}
void traverse ( )
{
struct node *ptr;
printf ("Traversing of stack :\n");
ptr=top;
while (ptr !=NULL)
{
printf ("%d\n", ptr->info);
ptr=ptr->link;
}
}


void push ( )
{
struct node *ptr;
ptr = (struct node *) malloc (sizeof (struct node));
if (ptr==NULL)
{
printf("Overflow\n");
return;
}
printf ("Input New node information");
scanf ("%d", &ptr->info);
ptr->link=top;
top = ptr;
}
void pop ( )
{
struct node *ptr;
if (top==NULL)
{
printf ("Underflow \n");
return;
}
ptr=top;
top = ptr->link;
free (ptr);
}

/* Program to find product of elements of the given array */
/* Data Structures Using C by UDIT AGARWAL */
#include<stdio.h>
#include<conio.h>
int prod(int a[],int n)
{
if(n == 0)
return(a[n]);
else
return(a[n] * prod (a, n-1));
}
void main()
{
clrscr();
int i, n, a[20], result;
printf("Enter the maximum number of elements in array \n");
scanf("%d",&n);
printf("Enter elements");
for (i=0; i<n; i++)
scanf("%d",&a[i]);
result = prod(a, n-1);
printf("Product of the elements in the array is %d", result);
getch();
}

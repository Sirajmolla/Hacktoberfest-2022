/* program to print array elements in an reverse order*/
/* Data Structures Using C by UDIT AGARWAL */
#include<stdio.h>
#include<conio.h>

void reverse(int a[], int n)
{
if(n == -1)
return;
printf("%d\n",a[n]);
reverse(a,n-1);
}

void main()
{
clrscr();
int i,n,a[20];
printf("Enter the Maximum number of elements in array :\n");
scanf("%d",&n);
printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("The reversed array is :\n");
reverse(a, n-1);
getch();
}

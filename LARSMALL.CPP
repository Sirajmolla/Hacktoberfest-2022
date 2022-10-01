/* Program to find largest and smallest of n elements in an array */
/* Data Structures Using C by UDIT AGARWAL */

#include<stdio.h>
#include<conio.h>

int largest (int a[], int n)
{
int lar;
if(n == 0)
return (a[n]);
lar = largest (a, n-1);
if (a [n] > lar)
return(a[n]);
return lar;
}

int minimum (int a[], int n)
{
int small;
if(n == 0)
return (a[n]);
small = minimum (a, n-1);
if (a [n] < small)
return (a[n]);
return small;
}

void main()
{
clrscr();
int n, a[20],lar,small;
printf("Enter the maximum number of elements in array :\n");
scanf ("%d", &n);
printf ("Enter elements\n");
for (int i=0; i<n; i++)
scanf("%d", &a[i]);
lar = largest (a, n-1);
small = minimum (a, n-1);
printf ("largest element in the given array is %d\n", lar);
printf ("Smallest element in the given array is %d\n", small);
getch();
}

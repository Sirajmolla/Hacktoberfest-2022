#include<stdio.h>
void creation(int arr[], int size)
{
  int el,pos=0;
 
  while(pos<size)
   {
      printf("Enter element %d : ",pos+1);
      scanf("%d",&el);
      arr[pos]=el;
      pos++;
   }
}
void traversal(int arr[], int size)
{
    int i;
      for(i=0;i<size;i++)
    printf("%d ",arr[i]);
}
void main()
{
   int arr[20]; //arr is an Array DS of size 20, linear, static, non-primitive
   int size;
   printf("Enter the size of the DS (Max-20): ");
   scanf("%d",&size);
   creation(arr,size);
   traversal(arr,size);
}
 

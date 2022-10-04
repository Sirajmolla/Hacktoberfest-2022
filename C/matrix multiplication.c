#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
    int sum=0;
    int arow,acol,brow,bcol;
    printf("ENter No of Row and column\n:");

    scanf("%d %d",&arow,&acol);

    for(int i=0;i<arow;i++)
    {
        for(int j=0;j<acol;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }

         for(int i=0;i<arow;i++)
    {
        for(int j=0;j<acol;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }


    printf("ENter No of Row and column for 2nd matrix:\n");

    scanf("%d %d",&brow,&bcol);



    for(int i=0;i<brow;i++)
    {
        for(int j=0;j<bcol;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }

     for(int i=0;i<brow;i++)
    {
        for(int j=0;j<bcol;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");

    }

     for(int i=0;i<arow;i++)
    {
        for(int j=0;j<bcol;j++)
        {
            for(int k=0;k<acol;k++)
            {
            sum+=(a[i][k]*b[k][j]);
              }
              c[i][j]=sum;
          sum=0;

        }
    }

    for(int i=0;i<arow;i++)
    {
        for(int j=0;j<bcol;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }


    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;

    cout << "Enter number of rows (between 1 and 10): ";
    cin >> r;
    cout << "Enter number of columns (between 1 and 10): ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of the first matrix entered by user.
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // Storing elements of the second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Initializing elements of matrix multiplication to 0.
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           mul[i][j]=0;
       }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
           for(k=0; k<c; ++k)
           {
               mul[i][j]+=a[i][k]*b[k][j];
           }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << " " << mul[i][j];
           if(j == c - 1)
               cout << endl;
       }

    return 0;
}


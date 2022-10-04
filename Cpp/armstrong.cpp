// C++ program to determine whether the entered number is Armstrong number or not

#include <bits/stdc++.h>
using namespace std;

int main() {
    int number, temp, digit, result = 0;
    cout << "Enter a number: ";
    cin >> number;
    temp = number;

    while (temp > 0) {
        digit = temp % 10;
        result += digit * digit * digit;
        temp /= 10;
    }

    if (result == number)
        cout << number << " is an Armstrong number.";
    else
        cout << number << " is not an Armstrong number.";

    return 0;
}

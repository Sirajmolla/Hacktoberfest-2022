#include <iostream>
#include <cstring>
using namespace std;
void func(string s, int n)
{
    bool count = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[(n - 1) - i])
        {
            cout << "It is not a palindrome" << endl;
            break;
        }
        else
        {
            count = true;
        }
    }
    if (count == true)
    {
        cout << "It is a palindrome" << endl;
    }
}
int main()
{
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    int n = s.size();
    cout << "the input string was : " << s << endl;

    func(s, n);
    return 0;
}

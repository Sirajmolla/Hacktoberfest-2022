#include <bits/stdc++.h>
using namespace std;

string encrypt(string text, int s)
{
	string p= "";

	for (int i=0;i<text.length();i++)
	{
		if (isupper(text[i]))
			p += char(int(text[i]+s-65)%26 +65);
	else
		p += char(int(text[i]+s-97)%26 +97);
	}

	return p;
}
string decrypt(string text, int s)
{
	string p = "";

	for (int i=0;i<text.length();i++)
	{
		if (isupper(text[i]))
			p += char(int(text[i]-s-65)%26 +65);
	else
		p += char(int(text[i]-s-97)%26 +97);
	}

	return p;
}

int main()
{
	string text="hello";
	int s = 4;
	cout << "Text : " << text;
	cout << "\nShift: " << s;
	string p=encrypt(text, s);
	cout<<"\nencript: "<<p;
	cout << "\ndecript: " << decrypt(p, s);
	return 0;
}

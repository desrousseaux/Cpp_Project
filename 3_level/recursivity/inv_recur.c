#include <iostream>
#include <string>

using namespace std;

void f(string s, int n)
{
	if (n == 1)
		cout << s[0] << '\n';
	else
	{
		cout << s[n-1];
		f(s, n-1);
	}
}

int main()
{
	string s;
	getline(cin, s);
	f(s, s.length());
	return 0;
}


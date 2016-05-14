#include <iostream>
#include <string>

using namespace std;
char t[100001];
int main()
{
	ios::sync_with_stdio(false);

	long n;
	cin >> n;
	cin.ignore();

	cin.getline(t, 100001);

	int i, l, r;
	i = 0;
	l = 0;
	r = 0;
	bool b = 1;

	while (b && i < n)
	{
		if (t[i] == '(')
			l++;
		else if (t[i] == ')')
			r++;
		if (l < r)
			b = 0;
		i++;
	}

	b = l == r;

	cout << b << '\n';
	return 0;
}

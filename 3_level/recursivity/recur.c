#include <iostream>

using namespace std;

void f(int s, int e)
{
	if (s == e)
		cout << s << '\n';
	else
	{
		cout << s << ' ';
		f(s+1,e);
	}
}

int main()
{
	int s, e;
	cin >> s >> e;
	f(s, e);
	return 0;
}

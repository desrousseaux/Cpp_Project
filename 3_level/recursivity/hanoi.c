#include <iostream>

using namespace std;

void han(int n, int d, int a, int i)
{
	if (n == 1)
		cout << d << " -> " << a << '\n';
	else
	{
		han(n-1, d, i, a);
		cout << d << " -> " << a << '\n';
		han(n-1, i, a, d);
	}
}

int main()
{
	int n;
	cin >> n;

	han(n, 1, 3, 2);

	return 0;
}

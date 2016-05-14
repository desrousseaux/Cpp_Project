#include <iostream>

using namespace std;

int main()
{
	int n, base;
	cin >> n >> base;
	int t[32];
	int i = 0;
	do
	{
		t[i] = n % base;
		n /= base;
		i++;
	}
	while ( n != 0 );
	cout << i << '\n';
	while ( i > 0 )
	{
		i--;
		cout << t[i] << ' ';
	}
	cout << '\n';
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int n, i, j;
	cin >> n;

	i = 1;
	while ( n/i > 1 )
		i *= 2;
	cout << i << '\n';
	return 0;
}

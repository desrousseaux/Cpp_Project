#include <iostream>

using namespace std;

int main()
{
	int b1, b2, n;
	cin >> b1 >> b2 >> n;
	int result = 0;
	int m;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		result = result*b1 + m;
	}

	int t[32];
	int i = 0;
	do
	{
		t[i] = result % b2;
		result /= b2;
		i++;
	}
	while ( result != 0 );
	while ( i > 0 )
	{
		i--;
		cout << t[i] << ' ';
	}
	cout << '\n'; 
	return 0;
}

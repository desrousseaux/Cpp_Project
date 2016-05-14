#include <iostream>

using namespace std;

void bin(int n)
{
	int t[32];
	int i = 0;
	do
	{
		t[i] = n%2;
		n /= 2;
		i++;
	}
	while ( n != 0 );
	while ( i > 0 )
	{
		i--;
		cout << t[i];
	}
}

int main()
{
	int n;
	cin >> n;
	int k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			k = (i+1)*(j+1);
			bin(k);
			if ( j == n-1 )
				cout << '\n';
			else
				cout << '\t';
		}
	return 0;
}

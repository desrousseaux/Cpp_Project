#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	long stock[n+m];
	for (int i = 0; i < n; i++)
		cin >> stock[i];
	int length = n;

	for (int i = 0; i < m; i++)
	{
		long b;
		cin >> b;
		int indice  = 0;
		while ( b > stock[indice] && indice < length)
			indice++;

		cout << indice << ' ';
		if ( indice != length+1)
			for (int j = length+1; j > indice; j--)
				stock[j] = stock[j-1];
		stock[indice] = b;
		length++;
	}
	cout << '\n';

	for (int i = 0; i < length; i++)
		cout << stock[i] << ' ';
	cout << '\n';
	return 0;
}

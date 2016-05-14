#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	long t[n];

	for (int i = 0; i < n; i++)
		cin >> t[i];

	for (int i = 0; i < n; i++)
	{
		long min = t[i];
		int indice = i;
		for (int k = i; k < n; k++)
		{
			if ( t[k] < min )
			{
				min = t[k];
				indice = k;
			}
		}

		if( indice != i)
		{
			long inter = t[i];
			t[i] = t[indice];
			t[indice] = inter;
		}
	}
	for (int i = 0; i < n; i++)
		cout << t[i] << ' ';
	cout << '\n';
	return 0;
}

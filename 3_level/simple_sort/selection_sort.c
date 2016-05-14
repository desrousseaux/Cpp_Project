#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	long t[n];
	for (int k = 0; k < n; k++)
		cin >> t[k];

	for (int i = 0; i < m; i++)
	{
		int max = 0;
		int position;

		for (int k = 0; k < n; k++)
		{
			if (t[k] > max)
			{
				max = t[k];
				position = k;
			}
		}

		cout << max << ' ';
		t[position] = 0;
	}
	cout << '\n';
	return 0;
}

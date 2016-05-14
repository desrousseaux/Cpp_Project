#include <iostream>
#define N 50*1000

using namespace std;

int t[2][N];

int main()
{
	int n1, n2;
	cin >> n1;
	for (int i = 0; i < n1; i++)
		cin >> t[0][i];
	cin >> n2;
	for (int i = 0; i < n2; i++)
		cin >> t[1][i];

	int i1, i2;
	i1 = 0;
	i2 = 0;
	while ( i1 < n1 || i2 < n2 )
	{
		if (i1 == n1)
		{
			cout << t[1][i2] << ' ';
			i2++;
		}
		else if (i2 == n2)
		{
			cout << t[0][i1] << ' ';
			i1++;
		}
		else
			if (t[0][i1] > t[1][i2] )
			{
				cout << t[1][i2] << ' ';
				i2++;
			}
			else
			{
				cout << t[0][i1] << ' ';
				i1++;
			}
	}
	cout << '\n';
	return 0;
}

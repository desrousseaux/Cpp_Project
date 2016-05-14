#include <iostream>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int t[n];
	for (int i = 0; i < n; i++)
		cin >> t[i];
	int d = 0;
    int pass[2*n*n];
	for (int i = 1; i <=  n; i++)
	{
		int k = 0;
		while ( t[k] != i )
			k++;
		for (int j = k; j > i-1; j--)
		{
			int inter = t[j];
            pass[2*d] = t[j-1];
            pass[2*d+1] = t[j];
			t[j] = t[j-1];
			t[j-1] = inter;
			d++;
		}
	}
    cout << d << '\n';
    for (int i = 0; i < d; i++)
		cout << pass[2*i] << ' ' << pass[2*i+1] << '\n';
	return 0;
}

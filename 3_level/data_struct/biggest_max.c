#include <iostream>
#define N (100*1000)+1

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int k, n;
	cin >> k >> n;
	int t[N];

	int max = 0;
	for (int i = 0; i < k; i++)
	{
		cin >> t[i];
		max += t[i]; 
	}

	int max2 = max;
	for (int i = k; i < n; i++)
	{
		cin >> t[i];
		max2 = max2 - t[i-k] + t[i];
		if (max2 > max)
			max = max2;
	}
	cout << max << '\n';

	return 0;

}

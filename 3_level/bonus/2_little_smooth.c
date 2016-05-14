#include <iostream>
#include <algorithm>

#define N 50000

using namespace std;

int t[2][N];

int main()
{
	int n[2];
	for (int i = 0; i < 2; i++)
	{
		cin >> n[i];
		for (int j = 0; j < n[i]; j++)
			cin >> t[i][j];
		sort(t[i], t[i] + n[i] );
	}
	int result = 0;
	n[0]--;
	n[1]--;
	while (n[0] >= 0 || n[1] >= 0)
	{
		while (t[0][n[0]] > t[1][n[1]])
			n[0]--;
		while (t[1][n[1]] > t[0][n[0]])
			n[1]--;
		if (t[0][n[0]] == t[1][n[1]] && n[0] >= 0 && n[1] >= 1)
		{	
			//cout << t[0][n[0]] << '\n';
			n[0]--;
			n[1]--;	
			result++;
		}
	}
	cout << result << '\n';
	return 0;
}	

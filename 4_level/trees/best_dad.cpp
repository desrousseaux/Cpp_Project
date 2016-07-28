#include <iostream>
#include <vector>

#define N 20001

using namespace std;

int t[N];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> t[i];
	int k, x, y;
	cin >> k;
	vector<int> tx, ty;
	for (int i = 0; i < k; i++)
	{
		cin >> x >> y;
		do
		{
			tx.push_back(x);
			x = t[x-1];
		}
		while ( x != 0 );
		do
		{
			ty.push_back(y);
			y = t[y-1];
		}
		while ( y != 0 );
		int result = 0;
		while (tx.size() > 0 && ty.size() > 0 && ty.back() == tx.back())
		{
			result = tx.back();
			tx.pop_back();
			ty.pop_back();
		}
		cout << result << '\n';
	}
	return 0;
}

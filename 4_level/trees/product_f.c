#include <iostream>
#define N 20001

using namespace std;

int t[N];

void plot( int k )
{
	if (t[k] != 0 )
	{
		plot( t[k] );
		cout << t[k] << ' ';
	}
}

int main()
{
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for(int i = 1 ; i <= n; i++)
		cin >> t[i];

	int r, k;
	cin >> r;
	for (int i = 0; i < r; i++)
	{
		cin >> k;
		plot(k);
		cout << k << '\n';
	}
	return 0;
}

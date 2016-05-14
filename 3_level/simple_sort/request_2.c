#include <iostream>
#include <algorithm>

long t[20000];
int mid;

using namespace std;

long find(long x, int start, int end)
{
	while( (end - start ) > 1 )
	{
		mid = (start + end)/2;

		if ( t[mid] >= x )
			end = mid;
		else 
			start = mid;
	}
	return (( t[end] - x >= x - t[start] ) ? t[start] : t[end]);
}

int main()
{
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> t[i];

	sort(t, t+n);

	int q;
	cin >> q;
	long ask;
	for(int i = 0; i < q; i ++)
	{
		cin >> ask;
		long answer = find(ask, 0, n-1);
		cout << answer << '\n';
	}
	return 0;
}

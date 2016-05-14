#include <iostream>
#include <algorithm>

#define N 20000

long t[N];

bool find(long x, int start, int end)
{
	bool f = false;
	int mid;
	while (!f && ((end -start > 1)))
	{
		mid = (start + end)/2;
		f = (t[mid]==x);

		if (t[mid] > x)
			end = mid;
		else
			start = mid;
	}
	return f || t[start]==x || t[end]==x;
}  
using namespace std;

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

	for (int i = 0; i < q; i++)
	{
		long a;
		cin >> a;
		bool b =find (a, 0, n-1);
		cout << b << '\n';
	}

	return 0;
}

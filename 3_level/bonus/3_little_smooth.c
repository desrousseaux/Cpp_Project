#include <iostream>
#include <algorithm>
#define N 50000

using namespace std;
int t[N];

bool f(int n, int i, int j)
{
	int mid = (i+j)/2;
	if ( i == j )
		return (n == t[i]);
	else if ( i == j-1 )
		return (n == t[i] || n == t[j]);
	else
		if ( n <= t[mid] )
			return f(n, i , mid);
		else 
			return f(n, mid, j);
}

int main()
{
	int n1;
	cin >> n1;
	for (int i = 0; i < n1; i++)
		cin >> t[i];

	sort(t, t+n1);

	int n2, k, result;
	cin >> n2;
	result = 0;

	for (int i = 0; i < n2; i ++)
	{
		cin >> k;
		//cout << "f = " << f(k,0,n1) << '\n';
		if ( f(k,0,n1) )
			result++;
	}

	cout << result << '\n';
	return 0;
} 

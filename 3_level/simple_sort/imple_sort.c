#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long t[n];
	for (int i = 0; i < n; i++)
		cin >> t[i];
	sort (t, t+n);
	for (int i = 0; i < n; i++)
		cout << t[i] << ' ';
	cout << '\n';
	return 0;
}

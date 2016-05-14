#include <iostream>
#include <algorithm>

struct w
{
	int num1;
	int num2;
};

bool compare(w lhs, w rhs ) { return (lhs.num2 < rhs.num2) || ( lhs.num2 == rhs.num2 && lhs.num1 < rhs.num1 ); }

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	w t[n];
	for (int i = 0; i < n; i++)
		cin >> t[i].num1 >> t[i].num2;

	sort( t, t + n, compare);

	for (int i = 0; i < n; i++)
		cout << t[i].num1 << ' ' << t[i].num2 << '\n';

	return 0;
}

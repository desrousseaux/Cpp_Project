#include <iostream>

int t[10000];

using namespace std;

int main()
{

	int p;
	cin >> p;
	for (int i = 0; i < p; i++)
		cin >> t[i];

	long o;
	cin >> o;
	int x, y;
	for (long i = 0; i < o; i++)
	{
		cin >> x >> y;
		t[x-1] += y;
	}

	for (int i = 0; i < p; i++)
		cout << t[i] << ' ' ;
	cout << '\n';

	return 0;
}

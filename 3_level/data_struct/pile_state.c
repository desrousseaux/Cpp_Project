#include <iostream>

long t[1000];

using namespace std;

int main()
{
	long o;
	cin >> o;
	int h = 0;

	int n;
	long d;

	for (long i = 0; i < o; i++)
	{
		cin >> n >> d;
		if (n > 0 )
			for (int j = 0; j < n; j++)
				t[j+h] = d;
		h += n;
	}

	d = t[0];
	for (int i = 0; i < h; i++)
		if (t[i] < d)
			d = t[i];

	cout << d << '\n';

	return 0;
}


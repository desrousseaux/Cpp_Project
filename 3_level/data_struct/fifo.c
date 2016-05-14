#include <iostream>

long t[1000];

using namespace std;

int main()
{

	long o;
	cin >> o;
	int h = 0;

	int x;
	long y;

	for (long i = 0; i < o ; i++)
	{
		cin >> x >> y;

		if ( x > 0)
			for (int j = 0; j < x; j++)
				t[j+h] = y;
		else
			for (int j = 0; j < h + x; j++)
				t[j] = t[j-x];
		h += x;
	}

	y = t[0];

	for (int i = 0; i < h; i++)
		if ( t[i] < y ) 
			y = t[i];

	cout << y << '\n';

	return 0;
}

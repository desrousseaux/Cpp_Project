#include <iostream>
#define N 100+1

using namespace std;


bool t[N][N];
bool m[N][N];

int main()
{

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			t[i][j] = false;
			m[i][j] = false;
		}
	
	int n;
	cin >> n;

	int x,y;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		t[x][y] = true;
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N-1; j++)
			for (int i2 = 0; i2 < N; i2++)
				for (int j2 = j; j2 < N; j2++)
					if ( (i != i2 || j != j2 ) && t[i][j] && t[i2][j2] && (i%2 == i2%2) && (j%2 == j2%2) )
						m[ (i+i2)/2 ][ (j+j2)/2 ] = true;

	int r = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if ( t[i][j] && m[i][j] )
				r++;

	cout << r << '\n';

	return 0;
}

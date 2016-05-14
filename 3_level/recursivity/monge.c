#include <iostream>
#define N 91

char t[N][N];

using namespace std;

void mon(int i, int j, int k)
{
	if ( k == 3 )
		for (int x = i; x < i+3; x++)
			for (int y = j; y < j+3; y++)
				if ( x != i+1 || y != j+1) 
					t[i][j] = '#';	
	else
	{
		mon(i, j, k/3);
		mon(i + k/3, j, k/3);
		mon(i + 2*k/3, j, k/3);
		mon(i, j + k/3, k/3);
		mon(i + 2*k/3, j + k/3, k/3);
		mon(i, j + 2*k/3, k/3);
		mon(i + k/3, j + 2*k/3, k/3);
		mon(i + 2*k/3, j + 2*k/3, k/3);
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			t[i][j] = ' ';

	mon(0, 0, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << t[i][j];
		cout << '\n';
	}

	return 0;
}

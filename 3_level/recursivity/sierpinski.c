#include <iostream>
#define N 64

char t[N][N];

using namespace std;

void sierp(int i, int j, int k)
{
	if ( k == 1 )
		t[i][j] = '#';
	else
	{
		sierp(i,j, k/2);
		sierp(i + k/2, j, k/2);
		sierp(i, j + k/2, k/2);
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			t[i][j] = ' ';

	sierp(0, 0, n);	
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i; j++)
			cout << t[i][j];
		cout << '\n';		
	}

	return 0;
}

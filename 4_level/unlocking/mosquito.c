#include <iostream>

#define N 350

using namespace std;

bool t[N][N];

int size(int i, int j, int nbRow, int nbColumn)
{
	bool b = 0;
	int k, i2, j2;
	k = 0;
	while ( !b  && i+k < nbRow && j+k < nbColumn)
	{
		i2 = i;
		j2 = j;
		while (!b && i2 < i+k+1 )
		{
			b = b || t[i2][j+k];
			i2++;
		}		
		while (!b && j2 < j+k+1 )
		{
			b = b || t[i+k][j2];
			j2++;
		}
		if ( !b )
			k++;	
	}	
	return k;
}
int main()
{
	ios::sync_with_stdio(false);

	int nbRow, nbColumn;
	cin >> nbRow >> nbColumn;
	for (int i = 0; i < nbRow; i++)
		for (int j = 0; j < nbColumn; j++)
			cin >> t[i][j];

	int result = 0;
	int k, i, j;
	i = 0;
	j = 0;
	while ( i+result < nbRow )
	{
		while ( j+result < nbColumn )
		{
			k = size (i,j,nbRow,nbColumn);
			if (k > result ) 
			{
				result = k;
				//cout << "new square of size " << result << " and coord " << i << "," << j << '\n';
			}
			j++;
		}
		j = 0;
		i++;
	}
	cout << result << '\n';
	return 0;
}

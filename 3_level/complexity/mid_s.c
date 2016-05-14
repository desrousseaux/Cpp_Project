#include <iostream>
#define N 1000+1

using namespace std;

struct point
{
	int x;
	int y;
} ;

int main()
{
	int n, nb, k;
	bool b;
	bool plan[N][N];
	point t[N];

	cin >> n;

	nb =0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			plan[i][j] = false;

	for (int i = 0; i < n; i++)
		cin >> t[i].x >> t[i].y;

	int mid_x, mid_y, x, y;

	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
		{
			mid_x = t[i].x + t[j].x;
			mid_y = t[i].y + t[j].y;

			if (mid_x%2 == 0 && mid_y%2 == 0 )
			{
				x = mid_x/2;
				y = mid_y/2;

				if ( plan[x][y] )
					b = true;
				else
				{
					b = false;	
					plan[x][y] = true;
				}					

				k = 0;
				while (!b &&  k < n )
				{
					if (t[k].x == x && t[k].y == y )
					{
						b = true;
						nb++;
					}
					k++;
				}
			}
		}
	cout << nb << '\n';
	return 0;
}

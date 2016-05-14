#include <iostream>
#define N 100*1000+1

using namespace std;

int t[N];

int f(int i, int j, int m)
{
	int mid;
	if ( j == 0 )
		return 0;
	else if ( i == j-1 )
	{
		if ( m >= t[i] )
			return i;
		else if ( m >= t[j] )
			return j;
		else
			return j+1;
	}
	else
	{
		mid = (i+j)/2;
		if ( t[mid] > m )
			return f(mid, j, m);
		else 
			return f(i, mid, m); 
	}
}
int main ()
{
	int n, m, h, l;
	char c;

	cin >> n;
	h = 0;

	for (int i = 0; i < n ; i++)
	{
		cin >> c;
		if (c == 'C')
		{
			cin >> m;
			l = f(0, h, m);
			/*while ( m < t[l] && l < h )
			  l++;
			 */
			if ( l < h )
			{
				h = l+1;
				t[l] = m;
			}
			else
			{
				t[h] = m;
				h++;
			}
		}
		else
			cout << h << '\n';
	}	
	return 0;
}

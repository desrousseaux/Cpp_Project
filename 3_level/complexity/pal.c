#include <iostream>
#include <string>
#define N 2000

using namespace std;

string t;

int pal(int i, int l)
{
	int p = 1;
	int k = 1;
	while ( i+k < l && i-k >= 0 && t[i+k] == t[i-k] )
		k++;
	if( p < 1 + 2*(k-1) )
		p = 1 + 2*(k-1);
	
	k = 1;
	if ( i+1 < l && t[i] == t[i+1] )
	{
		while ( i+k+1 < l && i-k >= 0 && t[i+k+1] == t[i-k] )
			k++;
		if ( p < 2*k )
			p = 2*k;	
	}
	return p;
}

int main()
{
	ios::sync_with_stdio(false);

	getline(cin, t);
	int l = t.length();
	int max = 1;
	int p;
	for (int i = 0; i < l; i++)
	{
		p = pal (i, l);
		if ( p > max )
			max = p; 
	}
	cout << max << '\n';
	return 0;
}

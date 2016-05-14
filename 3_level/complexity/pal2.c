#include <iostream>
#include <string>

using namespace std;

string t;

bool pal(int i, int j)
{
	if ( i == j )
		return true;
	else if ( i == j-1 )
		return t[i] == t[j];
	else
		if ( t[i] == t[j] )
			return pal( i+1, j-1 );
		else
			return false;
}

int main()
{
	ios::sync_with_stdio(false);

	getline(cin, t);
	int l = t.length();
	int max = 1;
	for (int i = 0; i < l-1; i++)
	
	cout << max << '\n';
	return 0;
}

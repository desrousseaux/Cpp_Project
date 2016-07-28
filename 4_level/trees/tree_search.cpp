#include <iostream>
#include <vector>

#define N 100000+1

using namespace std;

vector<int> t[N];

void search(int i)
{
	int size = t[i].size();
	for (int k = 0; k < size; k++)
	{
		cout << "A " << t[i][k] << '\n';
		search( t[i][k] );
	}
	if ( i != 0)
		cout << "R " << i << '\n';
}

int main()
{
	int n, k, l;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		cin >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> l;
			t[i].push_back(l);
		}
	}

	search(0);

	return 0;
}

#include <iostream>
#include <vector>
#define N 20001

using namespace std;

vector< vector<int> > t;

int main()
{
	int n;
	cin >> n;
	int k;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		t[k].push_back(i);
	}

	cout << t[0] <<'\n';
	return 0;
}



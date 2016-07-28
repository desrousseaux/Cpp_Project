#include <iostream>
#include <vector>

#define N 20001

using namespace std;

vector<int> t[N];

int deep( vector<int> v, int d)
{
	if (v.empty())
		return d;
	else
	{
		int max = 0;
		int inter;
		for (int i = 0; i < v.capacity(); i++)
		{
			inter = deep( t[v.back()], d+1);
			if (inter > max)
				max = inter;
			v.pop_back();
		}
		return max;
	}
}

int main()
{
	int n;
	cin >> n;
	int k;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		t[k].push_back(i+1);
	}
	cout << deep(t[0], 0) << '\n';
	return 0;
}

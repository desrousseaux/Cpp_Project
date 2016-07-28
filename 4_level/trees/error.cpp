#include <iostream>
#include <vector>
#include <string>

#define N 20000+1

using namespace std;

vector<int> t[N];
string s;

bool corresp(int i)
{
	bool b = 1;
	string inter = s;
	while ( i != 0 || inter.length() != 0)
	{
		int l = inter.length();
		if ( inter[l-1] != '?' )
			b = b && ( i%10 == inter[l-1] - '0' );
		inter.erase(inter.end()-1);
		i = i/10;
	}
	if ( inter.length() != 0 || i != 0)
		b = 0;
	return b;
}

int main()
{
	int n, k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		t[k].push_back(i+1);
	}
	vector<int> set;
	
	cin >> s;
	
	for (int i = 0; i < t[0].size(); i++)
		set.push_back(t[0][i]);
	while (set.size() != 0)
	{
		int size = set.size();
		for (int i = 0; i < size; i++)
			if ( corresp(set[i]) )
				cout << set[i] << ' ';
		for (int i = 0; i < size; i++)
			set.insert(set.end(), t[set[i]].begin(), t[set[i]].end());
		set.erase( set.begin(), set.begin() + size);
	}
	cout << '\n';
	return 0;
}

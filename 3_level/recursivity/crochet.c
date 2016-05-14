#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string s;
void f(int i)
{
	if (i!=0)
	{
		s = '[' + s + ']';
		f(i-1); 
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	stringstream convert;
	convert << n;
	s = convert.str();
	f(m);
	cout << s << '\n';
}


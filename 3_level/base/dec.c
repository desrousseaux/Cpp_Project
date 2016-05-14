#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	int result = 0;
	for (int i = 0; i < l; i++)
		if ( s[i] != '0' )
			result += pow(2, l-i-1);
	cout << result << '\n';
	return 0;
}

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int hex_to_dec(string s)
{
	int result = 0;
	int l = s.length();
	int k;
	for (int i = 0; i < l; i++)
	{
		bool b = (s[i] > 57 ); 
		if ( b )
			k = 10 + s[i] - 'A';
		else
			k = s[i] - '0';
		result = 16*result + k;
	}
	return result;
}

string dec_to_hex(int n, string s)
{
	if ( n > 15 )
		s += dec_to_hex(n/16, s);

	char c;
	int k = n%16;
	if ( k >= 10 )
		c = 'A' + k - 10;
	else
		c = '0' + k;
	return s += c;
} 

int main()
{
	string s;
	cin >> s;
	int n = hex_to_dec(s);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		sum += hex_to_dec(s);
	}
	sum /= n;
	string result;
	result = dec_to_hex(sum, result);
	cout << result << '\n';
	return 0;
}

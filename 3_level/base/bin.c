#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	string result;
	cin >> n;
	if (n == 0)
		result = '0';
	else
	{
		while ( n != 0 )
		{
			if ( n%2 == 1)
				result += "1";
			else 
				result += "0";
			n = (n - n%2 )/2;

		}

		reverse(result.begin(), result.end());
	}
	cout << result << '\n'; 
	return 0;
}

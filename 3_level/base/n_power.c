#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int base, nb, result, n;
	result = 0;
	cin >> base >> nb;
	for (int i = 0; i < nb; i++)
	{
		cin >> n;
		result += n*pow(base, nb-i-1); 
	}
	cout << result << '\n';
	return 0;
}

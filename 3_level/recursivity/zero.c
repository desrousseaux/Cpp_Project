#include <iostream>

using namespace std;

void z(int i)
{
	if (i == 0)
		cout << 0;
	else
	{
		cout << '(';
		z(i-1);
		cout << " + ";
		z(i-1); 
		cout << ')';
	}
}

int main()
{

	int n;
	cin >> n;
	cout << "0 = ";
	z(n);
	cout << '\n';
	return 0;
}


#include <iostream>
#define N 100000000

using namespace std;

//too big, the challenge imposes 32Mo of memory
bool t[N];

int main()
{
	for (int i = 0; i < N; i++)
		t[i] = 0;

	int n1, k;
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		cin >> k;
		t[k]++;
	}

	int n2, result;
	result = 0;
	cin >> n2;
	for (int i =0; i < n2; i++)
	{
		cin >> k;
		if (t[k] == 1)
			result++;
	}
	cout << result << '\n';
	return 0;
}

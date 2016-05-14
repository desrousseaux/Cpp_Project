#include <iostream>


using namespace std;
int main()
{
	ios::sync_with_stdio(false);

	int nbCust;
	cin >> nbCust;
	
    bool t[1000001];
	for (int i = 0; i < 1000001; i++)
	{
		t[i] = false;
	}
	int ID, Cust;
	
	Cust = 0;
	bool b = 1;
	while ( b && Cust < nbCust)
	{
		cin >> ID;
		if (t[ID] == 1)
			b = 0;
		else
		{
			t[ID]++;
			Cust++;
		}
	}
	if (b)
		cout << "-1" << '\n';
	else 
		cout << ID << '\n';
	return 0;
}

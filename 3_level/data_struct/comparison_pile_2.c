#include <iostream>

long t[100000];

void translate(long start, long end)
{
	for (int i = 0; i < end - start; i++)
		t[end - i] = t[end - i -1];
}

long find(long ID, long start, long end)
{
	long mid;
	while( (end - start ) > 1 )
	{
		mid = (start + end)/2;

		if ( t[mid] >= ID )
			end = mid;
		else 
			start = mid;
	}
	long ID_n;
	if ( ID == t[start] )
		return start;
	else if ( ID <= t[end] )
		return end;
	else
		return end+1;
}

using namespace std;

int main()
{

	long n;
	cin >> n;

	bool b = 1;
	long i = 1;
	long ID, ID_n;
	cin >> t[0];

	while (b && i < n)
	{
		cin >> ID;
		ID_n = find(ID, 0, i-1);
		//cout << ID << " = " << t[ID_n] << " ?\n";
		if ( ID_n != i )
		{
			if ( t[ID_n] == ID)
			{	
				//cout << "YES\n";
				cout << ID << '\n';
				b = 0;
			}
			else
			{
				//cout << "NO\n";
				translate(ID_n, i);
				t[ID_n] = ID;
				i++;
				/*for (int j = 0; j < i; j++)
					cout << t[j] << " ";
				cout << '\n';
				*/           
			}
		}
		else
		{
			//cout << "NO\n";
			t[ID_n] = ID;
			i++;
			/*for (int j = 0; j < i; j++)
				cout << t[j] << " ";
			cout << '\n';
			*/
		}
	}
	if (b)
		cout << "-1" << '\n';

	return 0;
} 

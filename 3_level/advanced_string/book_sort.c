#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
   int n;
   cin >> n;
   cin.ignore();

   string t[n];
   for (int i = 0; i < n; i++)
   {
      getline(cin, t[i]);
   }
   
   sort(t, t + n);

   for(int i = 0; i < n; i++)
   {
      cout << t[i] << '\n';
   }
   return 0;
}

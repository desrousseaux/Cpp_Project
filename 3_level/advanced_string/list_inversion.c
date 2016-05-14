#include <iostream>
#include <string>

using namespace std;

int main()
{

   int n;
   cin >> n;
   cin.ignore();

   string l[n];
   
   for (int i = 0; i < n; i++)
   {
      getline(cin,l[i]);
   }

   for (int i = 0; i < n; i++)
   {
      cout << l[n-i-1] << '\n';
   }
   return 0;
}
      

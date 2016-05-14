#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

   int n;
   cin >> n;
   cin.ignore();

   string s1, s2;
   getline(cin, s1);
   cout << s1 << '\n';

   for(int i = 0; i < n-1; i++)
   {
      getline(cin, s2);
      if ( s2 > s1 ) 
      {
         cout << s2 << '\n';
         s1 = s2; 
      }
   }
   return 0;
}
      

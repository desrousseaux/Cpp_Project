#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

   int n;
   cin >> n;
   for(int i = 0; i < n; i++) 
   {
      string s;
      cin >> s;
      if ( isalpha(s[0]) || s[0] == '_' )
      {
         int a = 0;
         for (int j = 1; j < (int)(s.length()); j++)
         {
            if ( ! ( isalpha(s[j]) || isdigit(s[j]) || s[j] == '_' ) )
            {
               a++;
            }
         }
         if ( a == 0 )
         {
            cout << "YES" << '\n';
         }
         else 
         {
            cout << "NO" << '\n';
         }
      }
      else
      {
         cout << "NO" << '\n';
      }
   }
   return 0;
}

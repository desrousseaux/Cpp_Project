#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
   string s;
   cin >> s;
   for (int i = 0; i < (int)(s.length()); i++)
   {
      s[i] = (char)(toupper(s[i]));
   }
   int n = 0;
   
   while( !(cin.fail()))
   {
      string a;
      cin >> a;
      for (int i = 0; i < (int)(a.length()); i++)
      {
         a[i] = (char)(toupper(a[i]));
      }
      if ( a == s ) 
         n++;
      
   }
   cout << n << '\n';
   return 0;
}

   
   

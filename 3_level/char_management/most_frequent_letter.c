#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
   int t[26] = {0};
   string s;
   getline(cin, s);
   
   for (int i = 0; i < (int)(s.length()); i++)
   {
      if (s[i] != ' ')
      { 
          t[ (char)toupper(s[i]) - 'A' ]++;
      }
   }
   int n = 0;
   char c;
   for (int i = 0; i < 26; i++)
   {
      if (t[i]>n)
      {
         n = t[i];
         c = i + 'A';
      }
   }
   cout << c << '\n';
}
      

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
   string s;
   getline(cin,s);
    
   float f[26] = {0.0};
   int k = 0;
   for (int j = 0; j < (int)(s.length()); j++)
   {
     if ( isalpha(s[j]) )
     {
       f[ (char)toupper(s[j]) - 'A' ]++;
       k++;
     }
   }
   
   for (int j = 0; j < 26; j++)
   {
      cout << f[j]/k << '\n';
   }
   
   return 0;
} 

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
   int n;
   cin >> n;
   string s[n];
   
   for (int i = 0; i < n; i++)
   {
      string s1, s2;
      cin >> s1 >> s2;
      s[i] = s2 + ' ' + s1;
   }

   sort(s, s+n);
   
   for(int i = 0; i < n; i++)
   {
      cout << s[i] << '\n';
   }
   return 0;
}
      

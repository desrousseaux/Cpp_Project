#include <iostream>

using namespace std;

int main()
{
   string s;
   for (char c = 'b'; c <= 'z'; c++)
   {
      if (c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
      {
         s = s + c + ' ';
      }
   }
   cout << s << '\n';
}

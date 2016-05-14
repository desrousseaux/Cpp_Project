#include <iostream>

using namespace std;

int main()
{
   string s;
   for (char c = 'A'; c <= 'Z'; c++)
   {
      s = s + c + ' ';
   }
   cout << s << '\n';
   return 0;
}

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int nb(string s) 
{
   int l = s.length();
   int n = 0;
   for (int i = 0; i < l; i++)
   {
      n += s[i] - 'A';
   }  
   return n;
}

int reduce(int n)
{
   while ( n >= 10 )
   {
      ostringstream convert;
      convert << n;
      string number = convert.str();

      int l = number.length();
      n = 0;
      for (int i = 0; i < l; i++)
      {
         n += number[i] - '0';
      }
   }
   return n;
}

int main() 
{
   string s1, s2;
   cin >> s1 >> s2;
   int n1, n2;
   n1 = reduce(nb(s1));
   n2 = reduce(nb(s2));
   cout << n1 << ' ' << n2 <<'\n';
   return 0;
}

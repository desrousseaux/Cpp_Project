#include <iostream>
#include <string>

using namespace std;

int main()
{
   int n = 0;
    
   for (int i = 0; i < 1000; i++)
   {
      for (int j = 0; j < 1000; j++)
      {
         int a;
         cin >> a;
         if ( !(cin.fail()))
         {
            n += a;
         }
      }
   }
   
   cout << n << '\n';
   return 0;
} 

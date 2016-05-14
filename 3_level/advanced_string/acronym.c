#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

   string a;
   cin >> a;
   int n;
   cin >> n;
   cin.ignore();

   for (int i = 0; i < n; i++)
   {
      string lettre;
      string titre;
      getline(cin, titre);
      
      titre[0] = (char)(toupper(titre[0]));
      lettre += titre[0];
      
      for (int j = 1; j < (int)(titre.length()); j++)
      {
         if( isalpha(titre[j-1]) )
         {
            titre[j] = (char)(tolower(titre[j]));
         }
         else
         {
            titre[j] = (char)(toupper(titre[j]));
            lettre += titre[j];
         }
      }

      if ( a == lettre ) 
      {
         cout << titre << '\n';
      }
   }

   return 0;
}

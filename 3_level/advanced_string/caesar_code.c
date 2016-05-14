#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char decrypt(char c, string code)
{
   return code[c-'a'];
}

int main()
{
    string code, texte;
    cin >> code;
    cin.ignore();
    getline(cin, texte);
    
    for (int i = 0; i < (int)(texte.length()); i++)
    {
       if ( isalpha(texte[i]) )
       {
          if ( islower(texte[i]) )
          {
             cout << decrypt(texte[i], code);
          }
          else 
          {
             cout << (char)(toupper(decrypt((char)(tolower(texte[i])), code)));
          }
       }
       else 
       {
          cout << texte[i];
       }
    }
    cout << '\n';
    return 0;
}   

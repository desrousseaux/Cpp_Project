#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  int n;
  cin >> n;
  cin.ignore();
  
  for (int i = 0; i < n; i++) 
  {
    string s;
    getline(cin,s);
    
    char t[100] = {'0'};
    int k = 0;
    for (int j = 0; j < (int)(s.length()); j++)
    {
      if (s[j] != ' ')
      {
        t[k] = (char)toupper(s[j]);
        k++;
      }
    }
    
    int v = 0;
    for (int j = 0; j < k/2 ; j++)
    {
      if ( t[j] != t[k-1-j] ) 
      {
        v++;
      }
    }
    
    if ( v == 0 )
    {
      for (int j = 0; j < (int)(s.length()); j++) 
      {
        cout << s[j];
      }
      cout << '\n';
    }
  }
  return 0;
}

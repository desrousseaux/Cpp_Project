#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string line;
  getline(cin, line);
  int l = (int)(line.length());
  for (int i = 0; i < l; i++) 
  {
    cout << (char)toupper(line[i]);
  }
  cout << '\n';
  return 0;
}

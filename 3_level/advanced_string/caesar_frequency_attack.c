#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char m_freq_let(string s)
{
    int t[26] = {0};
   
    for (int i = 0; i < (int)(s.length()); i++)
    {
        if (s[i] != ' ')
        { 
            t[ (char)toupper(s[i]) - 'A' ]++;
        }
    }
    int n = 0;
    char c;
    for (int i = 0; i < 26; i++)
    {
        if (t[i]>n)
        {
            n = t[i];
            c = i + 'A';
        } 
    }
    return c;
}

int main()
{
    string s;
    getline(cin, s);
    
    char c = m_freq_let(s);
    
    int k = c - 'E';
 
    for (int j = 0; j < (int)(s.length()); j++)
    {
        if ( isupper(s[j]) )
        {
            cout << (char)( ((s[j] - k - 'A')%26 + 26 )%26 + 'A' );
        }
        else if ( islower(s[j]) )
        {
            cout << (char)( ((s[j] - k - 'a')%26 + 26 )%26 + 'a' );
        }
        else
        {
            cout << s[j];
        }
    }
    
    cout << '\n';
    return 0;
}


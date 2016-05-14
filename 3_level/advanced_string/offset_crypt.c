#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 2; i <= n; i++)
    {
        int x;
        if ( i%2 == 0 )
            x = -3*i;
        else
            x = 5*i;

        string s;
        getline(cin, s);
        
        for (int j = 0; j < (int)(s.length()); j++)
        {
            if ( isupper(s[j]) )
            {
                cout << (char)( ((s[j] + x - 'A')%26 + 26 )%26 + 'A' );
            }
            else if ( islower(s[j]) )
            {
                cout << (char)( ((s[j] + x - 'a')%26 + 26 )%26 + 'a' );
            }
            else
            {
                cout << s[j];
            }
        }
        cout << '\n';
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    for (int i = 0; i < min(s.length(), t.length()); i++)
    {
        if (s[i] != t[t.length() - 1 - i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
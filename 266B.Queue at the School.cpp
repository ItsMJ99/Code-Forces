#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            // cout << s[j] << " " << s[j + 1] << endl;
            if (s[j] == 'B' && s[j + 1] != '\0' && s[j + 1] != 'B')
            {
                swap(s[j], s[j + 1]);
                j += 1;
            }
        }
    }
    cout << s << endl;

    return 0;
}
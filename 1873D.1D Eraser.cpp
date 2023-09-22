#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int op = 0;
        int i = 0;
        while (i < n)
        {
            if (s[i] == 'B')
            {
                op++;
                i += k;
            }
            else
                i++;
        }
        cout << op << endl;
    }

    return 0;
}

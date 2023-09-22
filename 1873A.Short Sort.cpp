#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int c = 0;
        if (str[0] != 'a')
            c++;
        if (str[1] != 'b')
            c++;
        if (str[2] != 'c')
            c++;

        if (c <= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
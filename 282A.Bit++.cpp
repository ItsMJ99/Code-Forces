#include <iostream>
using namespace std;

int main()
{
    int t;
    int x = 0;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        if (str[0] == 'X' || str[2] == 'X')
        {
            if ((str[1] == '+' && str[2] == '+') || (str[0] == '+' && str[1] == '+'))
                ++x;
            else if ((str[1] == '-' && str[2] == '-') || (str[0] == '-' && str[1] == '-'))
                --x;
        }
    }
    cout << x << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    long long n, luck = 0;
    cin >> n;
    string str = to_string(n);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '4' || str[i] == '7')
            luck++;
    }

    if (luck == 4 || luck == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
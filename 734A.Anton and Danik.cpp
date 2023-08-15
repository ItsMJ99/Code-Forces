#include <iostream>
using namespace std;

int main()
{
    int t, a = 0, d = 0;
    string wins;
    cin >> t;
    cin >> wins;
    for (int i = 0; i < t; i++)
    {
        if (wins[i] == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        cout << "Anton" << endl;
    else if (d > a)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    if (isupper(str[0]))
        cout << str << endl;
    else if (islower(str[0]))
    {
        str[0] = toupper(str[0]);
        cout << str << endl;
    }
    return 0;
}
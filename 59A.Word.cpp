#include <iostream>
using namespace std;

void convert(string str, int uc, int lc)
{
    if (uc == lc || lc > uc)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (isupper(str[i]))
                str[i] = tolower(str[i]);
        }
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (islower(str[i]))
                str[i] = toupper(str[i]);
        }
    }
    cout << str << endl;
}

int main()
{
    int uc = 0, lc = 0;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
            uc++;
        else if (islower(str[i]))
            lc++;
    }
    convert(str, uc, lc);
    return 0;
}
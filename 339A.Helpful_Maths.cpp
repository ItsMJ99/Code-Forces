#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i += 2)
    {
        for (int j = 0; j < str.length(); j += 2)
        {
            if (isdigit(str[i]) && isdigit(str[j]))
            {
                if (str[i] < str[j])
                    swap(str[i], str[j]);
            }
        }
    }
    cout << str << endl;
    return 0;
}

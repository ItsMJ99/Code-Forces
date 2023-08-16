#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int flag = 0;
        int n;
        cin >> n;
        int a[n];
        for (int j = 1; j <= n; j++)
        {
            cin >> a[j];
        }

        for (int k = 1; k <= n; k++)
        {
            if (a[k] != a[k + 1] && a[k + 1] != a[k + 2])
            {
                cout << k + 1 << endl;
                flag = 1;
                break;
            }
            else if (a[k] != a[k + 1] && a[k] != a[k - 1] && a[k + 1] != '\0' && a[k - 1] != '\0')
            {
                cout << k << endl;
                flag = 1;
                break;
            }
            flag = 0;
        }
        if (flag == 0)
            cout << n << endl;
    }
    return 0;
}
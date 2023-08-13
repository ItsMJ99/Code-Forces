#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int par[n + 1];

    int c = 0;
    int dup = 0;
    for (int i = 1; i <= n; i++)
        cin >> par[i];

    for (int p = 1; p <= n; p++)
    {
        if (par[p] >= par[k] && par[p] > 0)
        {
            if (p == k && dup == 0)
            {
                continue;
            }
            else
                c += 1;
        }
    }
    cout << c << endl;
    return 0;
}

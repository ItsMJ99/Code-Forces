#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans = 0;
    while (t--)
    {
        int c1, c2, c3;
        cin >> c1;
        cin >> c2;
        cin >> c3;
        if (c1 + c2 + c3 > 1 && c1 + c2 + c3 < 4)
            ans += 1;
    }
    cout << ans << endl;
    return 0;
}
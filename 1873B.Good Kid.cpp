#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        int num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        sort(a.begin(), a.end());
        int ans = a[0] + 1;
        for (int i = 1; i < n; i++)
        {
            ans *= a[i];
        }
        cout << ans << endl;
    }
    return 0;
}
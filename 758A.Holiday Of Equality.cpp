#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, num, count = 0;
    vector<int> wealth;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        wealth.push_back(num);
    }
    sort(wealth.begin(), wealth.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (wealth[i] < wealth[n - 1])
            count += (wealth[n - 1] - wealth[i]);
    }

    cout << count << endl;

    return 0;
}
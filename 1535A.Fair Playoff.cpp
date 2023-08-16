#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p1, p2, p3, p4;
        cin >> p1 >> p2 >> p3 >> p4;
        int p5 = p1 > p2 ? p1 : p2;
        int p6 = p3 > p4 ? p3 : p4;
        if ((p5 > p3 || p5 > p4) && (p6 > p1 || p6 > p2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
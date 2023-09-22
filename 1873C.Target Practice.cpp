#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char grid[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> grid[i][j];
            }
        }
        int val[10][10] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                           {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                           {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                           {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                           {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                           {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                           {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                           {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                           {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                           {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
        int tp = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (grid[i][j] == 'X')
                {
                    tp += val[i][j];
                }
            }
        }
        cout << tp << endl;
    }

    return 0;
}

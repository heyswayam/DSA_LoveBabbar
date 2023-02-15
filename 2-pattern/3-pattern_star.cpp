#include <iostream>
using namespace std;
int main()
{
    // PATTERN 1

    // ****
    //  ***
    //   **
    //    *

    // int s, num, row = 0, col = 0;
    // cin >> num;
    // while (row < num)
    // {
    //     s=0;
    //     while (s < row)
    //     {
    //         cout << " ";
    //         s++;
    //     }
    //     col = num - row;
    //     while (col > 0)
    //     {
    //         cout << "*";
    //         // cout<< col;
    //         col--;
    //     }
    //     cout << endl;
    //     row++;
    // }
    // PATTERN 2

    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1

    int num, row = 0, col;
    cin >> num;
    while (row < num)
    {
        col = 0;
        while (col < (num - row))
        {
            cout << col + 1;
            col++;
        }
        col = 0;
        while (col < (row * 2))
        {
            cout << "*";
            col++;
        }
        col = num - row;
        while (col > 0)
        {
            cout << col;
            col--;
        }

        cout << endl;
        row++;
    }

    return 0;
}
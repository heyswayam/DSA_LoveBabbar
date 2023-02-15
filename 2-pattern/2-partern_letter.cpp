#include <iostream>
using namespace std;

int main()
{
    // PATTERN 1
    // 1
    // 21
    // 321
    // 4321
    // 54321

    // int num, row = 0, col = 0;
    // cin >> num;
    // while (row < num)
    // {

    //     while (col <= row)
    //     {
    //         cout << num - col;
    //         cout<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    //     col=0;
    // }

    // PATTERN 2
    // A
    // BB
    // CCC

    // int num, row = 0, col = 0;
    // cin >> num;
    // while (row < num)
    // {
    //     char ch = 'A' + row;

    //     while (col <= row)
    //     {
    //         cout << ch;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    //     col = 0;
    // }

    // PATTERN 3
    // ABC
    // BCE
    // CDE

    // int num, row = 0, col = 0;
    // cin >> num;
    // while (row < num)
    // {

    //     while (col < num)
    //     {
    //     char ch = 'A' + row+col;
    //         cout << ch;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    //     col = 0;
    // }

    // PATTERN 4
    // A
    // BC
    // CDE
    // DEFG

    // int num, row = 0, col = 0;
    // cin >> num;
    // while (row < num)
    // {

    //     while (col <= row)
    //     {
    //         char ch = 'A' + row + col;
    //         cout << ch;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    //     col = 0;
    // }

    // PATTERN 5
// D
// CD
// BCD
// ABCD

    int num, row = 0, col = 0;
    cin >> num;
    while (row < num)
    {

        while (col <= row)
        {
            char ch = 'A' + num-1-col;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
        col = 0;
    }
    return 0;
}
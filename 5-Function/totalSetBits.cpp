#include <iostream>
using namespace std;
int setBits(int num)
{
    int x = 0;
    while (num != 0)
    {
        if (num & 1)
        {
            x++;
        }
        num = num >> 1;
    }
    return x;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Total bits :" << setBits(a) + setBits(b) << endl;

    return 0;
}
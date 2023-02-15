#include <iostream>
using namespace std;
bool isEven(int num)
{
    if (num & 1)
    {
        return false;
    }
    return true;
}
int main()
{
    cout << "Hello World" << endl;
    int a;
    cin >> a;
    cout << isEven(a);
    return 0;
}
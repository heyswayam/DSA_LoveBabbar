#include <iostream>
using namespace std;
bool isPrime(int a)
{
    if (a == 1 | a == 0)
        return false;
    if (a < 0)
        a = -a;

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            return false;
        // break;
    }
    return true;
}

int main()
{
    cout << "Hello World" << endl;
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << isPrime(n);
    return 0;
}
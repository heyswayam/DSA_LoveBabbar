#include <iostream>
using namespace std;
int fibonacci(int i)
{
    int num1 = 0;
    int num2 = 1;
    if (i == 1)
        return 0;
    if (i == 2)
        return 1;
    int num3 = num1 + num2;
    if (i == 3)
        return num3;
    for (int a = 4; a <= i; a++)
    {
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
    }
    return num3;
}
int main()
{
    cout << "Hello World" << endl;
    int i;
    cout << "Enter the nth number of fabonacci series : ";
    cin >> i;
    cout << i << "th number = " << endl
         << fibonacci(i) << endl;
    return 0;
}
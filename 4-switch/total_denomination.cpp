#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    // int num;
    // cout << "Enter num : ";
    // cin >> num;
    // // 100 notes
    // cout << "100 Rs: " << num / 100 << endl;
    // num = num % 100;
    // // 50 notes
    // cout << "50 Rs: " << num / 50 << endl;
    // num = num % 50;
    // // 20 notes
    // cout << "20 Rs: " << num / 20 << endl;
    // num = num % 20;
    // // 10 notes
    // cout << "10 Rs: " << num / 10 << endl;
    // num = num % 10;

    int num;
    cout << "Enter number" << endl;
    cin >> num;
    switch (1)
    {
    case 1:
        cout << "100Rs notes :" << num / 100 << endl;
        num = num % 100;
    case 2:
        cout << "50Rs notes :" << num / 50 << endl;
        num = num % 50;
    case 3:
        cout << "20Rs notes :" << num / 20 << endl;
        num = num % 20;
    case 4:
        cout << "10Rs notes :" << num / 10 << endl;
        num = num % 10;
    case 5:
        cout << "5Rs coins :" << num / 5 << endl;
        num = num % 5;
    case 6:
        cout << "1Rs coins :" << num / 1 << endl;
        num = num % 1;
    }
    return 0;
}
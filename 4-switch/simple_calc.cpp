#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    int a, b;
    cout << "Enter the value of a :";
    cin >> a;
    cout << "Enter the value of b :";
    cin >> b;
    char ch;
    cout << "Enter the operation i.e. (+ , - , * , / , %) :";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b << endl;
        break;
    case '%':
        cout << a << " % " << b << " = " << a % b << endl;
        break;

    default:
        cout << "Please enter a valid operation" << endl;
        break;
    }

    return 0;
}
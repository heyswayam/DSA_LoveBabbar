#include <iostream>
using namespace std;
void printArr(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
}
void swapAlt(int num[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(num[i], num[i + 1]);
        }
    }
}
int main()
{
    cout << "Hello World" << endl;
    int size, arr[100];
    cout << "Enter size of arr : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value for index " << i << " : ";
        cin >> arr[i];
    }
    cout << "Original :";
    printArr(arr, size);
    swapAlt(arr, size);
    cout << "Swapped :";
    printArr(arr, size);

    return 0;
}
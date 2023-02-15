#include <iostream>
using namespace std;
int maxArr(int num[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)

    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int minArr(int num[], int size)
{
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}
int main()
{
    cout << "Hello World" << endl;
    int size, arr[100];
    cout<<"Enter size of arr : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the value for index "<<i<<" : ";
        cin >> arr[i];
    }
    cout << "Maximum :" << maxArr(arr, size) << endl;
    cout << "Minimum :" << minArr(arr, size) << endl;
    return 0;
}
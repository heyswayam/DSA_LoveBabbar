#include <iostream>
using namespace std;
int sumArr(int num[], int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)

    {
        sum+=num[i];
    }
    return sum;
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
    cout << "Sum :" << sumArr(arr, size) << endl;
    return 0;
}
// #include <iostream>
// using namespace std;
// // Without swap function

// void revArr(int num[], int size)
// {

// int temp;
//     for (int i = 0; i < size/2 ; i++)

//     {
//         temp=num[i];
//         num[i] = num[size - 1 - i];
//         num[size-1-i]=temp;
//     }
// }
// int main()
// {
//     cout << "Hello World" << endl;
//     int size, arr[100];
//     cout << "Enter size of arr : ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter the value for index " << i << " : ";
//         cin >> arr[i];
//     }
//     revArr(arr, size);
//     cout << "Reversed array: " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " , ";
//     }

//     return 0;
// }

// Using swap function
#include <iostream>
using namespace std;

void revArr(int num[], int size)
{

    int start=0,end=size-1;
    while (start<=end)
    {
        swap(num[start],num[end]);
        start++;
        end--;
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
    revArr(arr, size);
    cout << "Reversed array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " , ";
    }

    return 0;
}
#include <iostream>
using namespace std;
bool search(int num[], int size, int key)
{
    for (int i = 0; i < size; i++)

    {
        if (num[i] == key)
        {
            return 1;
        }
    }
    return 0;
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
    int key;
    cout << "Enter the value which you are looking for : ";
    cin >> key;
    int ans= search(arr, size, key);
    if (ans)
    {
        cout << "The key is present inside the array" << endl;
    }
    else
    {
        cout << "The key isn't present inside the array" << endl;
    }

    return 0;
}
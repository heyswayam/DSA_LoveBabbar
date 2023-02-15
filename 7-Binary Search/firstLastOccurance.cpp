#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (k == arr[m])
        {
            ans = m;
            e = m - 1;
        }
        else if (k > arr[m])
        {
            s = m + 1;
        }
        else if (k < arr[m])
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (k == arr[m])
        {
            ans = m;
            s = m + 1;
        }
        else if (k > arr[m])
        {
            s = m + 1;
        }
        else if (k < arr[m])
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    cout << "Hello World" << endl;
    int arr[] = {1, 2, 2, 2, 2, 2, 2, 2, 3, 5, 5, 6, 6, 7, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    cout << "First occurance of key: " << key << " is at index: " << firstOcc(arr, size, key) << endl;
    cout << "Last occurance of key: " << key << " is at index: " << lastOcc(arr, size, key) << endl;
    return 0;
}
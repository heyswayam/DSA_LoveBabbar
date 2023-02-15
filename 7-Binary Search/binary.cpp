#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 6, 8, 9, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    int key;
    cout << "Enter key: ";
    cin >> key;
    while (start < end)
    {
        if (key == arr[mid])
        {
            key = 0;
        cout << "start: " << start << " | end: " << end << " | mid: " << mid << endl;
            break;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
            mid = (start + end) / 2;
        cout << "start: " << start << " | end: " << end << " | mid: " << mid << endl;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
            mid = (start + end) / 2;
        cout << "start: " << start << " | end: " << end << " | mid: " << mid << endl;
        }
    }
    if (key != 0)
    {
        cout << -1 << endl<<"Key not found!!";
    }
    else
    {
        cout << "Index of the key=" << arr[mid] << " is : " << mid;
    }

    return 0;
}
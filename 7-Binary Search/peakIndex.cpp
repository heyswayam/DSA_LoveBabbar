#include <iostream>
using namespace std;
int maxmValue(int arr[])
{
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}
int main()
{   int arr[]= {0,10,5,2};
    cout<<maxmValue(arr);
    return 0;
}
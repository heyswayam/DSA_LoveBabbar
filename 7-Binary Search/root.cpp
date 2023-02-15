#include <iostream>
using namespace std;
int isPossibleSoln(int arr[], int mid, int m)
{
    int i = 0;
    int sum1 = arr[i];
    for (int i = 0; sum1 < mid; i++){
        sum1 += arr[i];

    }
    i = i - 1;
    int sum2 = arr[i];
    for (int i = 0; sum2 < mid; i++)
    {
        sum2 += arr[i];
        if (sum2 > mid)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int arr[] = {10, 20, 30, 40}, n = 4, m = 2;
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int s = 0, e = sum, ans = -1, mid = s + (e - s) / 2;
    mid = 50;
    cout << isPossibleSoln(arr, mid, m);
    //   while (s <= e) {
    //     if (isPossibleSoln(arr, sum, n, m)) {
    //       e = mid - 1;
    //     } else {
    //       ans = mid;
    //       s = mid + 1;
    //     }
    //     mid = s + (e - s) / 2;
    //   }
    return 0;
}
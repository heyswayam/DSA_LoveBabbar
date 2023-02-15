#include <iostream>
using namespace std;
int findPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int m = s + ((e - s) / 2);
    // cout
    while (s < e)
    {
        if (arr[m] >= arr[0])
        {
            s = m + 1;
            // cout<<"s :"<<s<<endl;
        }
        else
        {
            e = m;
            // cout<<"e :"<<e<<endl;

        }
    m = s + ((e - s) / 2);
    }
    return s; // returning s e or m gives same ans in this case
}
int main()
{
    int a[]={8 ,4, 5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Pivot index is : "<<findPivot(a,n);

    return 0;
}
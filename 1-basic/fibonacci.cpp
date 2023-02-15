#include <iostream>
using namespace std;
int main()
{
    int num,sum,a=0,b=1;
    cin>>num;
    cout<<a<<","<<b<<",";
    for (int i = 0; i < num; i++)
    {
        sum=b+a;
        cout<<sum<<",";
        a=b;
        b=sum;
    }
    
    return 0;
}
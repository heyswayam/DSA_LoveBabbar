#include <iostream>
#include <cmath>
using namespace std;
int main()
{
//decimal to bit
//    int n, digit,num=0, bin = 0, i = 0,a;
//    cout << "Enter a number" << endl;
//    cin >> n;
//    // converting decimal
//    while (n!=0)
//    {
//       a=n&1;
//       num=a*pow(10,i)+num;
//       i++;
//     //   cout<<i<<" : "<<num<<endl;
//       n=n >> 1;
//    }
//    cout<<"ans :"<<num;

//bit to decimal
   int n, digit,num=0, bin = 0, i = 0,a;
   cout << "Enter a number" << endl;
   cin >> n;
   while (n!=0)
   {
      a=n%10;
      num=a*pow(2,i)+num;
      i++;
      n=n /10;
   }
   cout<<"ans :"<<num;
   return 0;
}
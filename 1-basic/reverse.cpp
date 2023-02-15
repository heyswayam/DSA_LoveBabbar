#include <iostream>
using namespace std;
int main()
{
    int num,i,bin,digit;
   // reversing the binary
   i = 0;
   num=023;
   bin=0;
   while (num != 0)
   {
      digit = num % 10;
      bin = digit* 10 +bin;
      num = num / 10;
      i++;
   }
   cout << bin;
   return 0;
}
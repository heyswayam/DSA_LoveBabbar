#include <iostream>
using namespace std;
int power(int num1, int num2){
    int ans=1;
    for (int i = 0; i < num2; i++)
    {
        ans=num1*ans;
    }
    
    return ans;
}
int main(){
    cout<<"Hello World"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}
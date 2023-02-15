#include <iostream>
using namespace std;
int fact(int n){
    if (n==1)
    {
        return 1;
    }
    
    return n*fact(n-1);
}
int nCr(int n, int r){
    int a=fact(n);
    int b=fact(n-r);
    int c=fact(r);
    return (a/(b*c));
}
int main(){
    cout<<"Hello World"<<endl;
    int n,r;
    cin>>n>>r;

cout<<nCr(n,r);
    return 0;
}
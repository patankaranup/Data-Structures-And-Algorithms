#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    int ans = fib(7);
    cout<<ans<<endl;
    return 0;
}
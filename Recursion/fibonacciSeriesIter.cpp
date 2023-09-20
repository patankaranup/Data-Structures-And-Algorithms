#include<iostream>
using namespace std;
int fib(int n){
    int t0 = 0;
    int t1 = 1;
    if(n<=1){
        return n;
    }
    int sum = 0;
    for(int i=2; i<=n; i++){
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }
    return sum;
}
int main(){
    int ans = fib(10);
    cout<<ans<<endl;
    return 0;
}
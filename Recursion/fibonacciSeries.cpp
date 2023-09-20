#include<iostream>
using namespace std;
int memo[10];
int fib(int n){
    if(n<=1){
        memo[n] = n;
        return n;
    } else {
        if(memo[n-2] == -1){
            memo[n-2] = fib(n-2);
        } 
        if(memo[n-1] == -1){
            memo[n-1] = fib(n-1);
        }
        return memo[n] = memo[n-2] + memo[n-1];
    }
}
int main(){
    for(int i=0; i<10; i++){
        memo[i] = -1;
    }
    int ans = fib(10);
    cout<<ans<<endl;
    return 0;
}
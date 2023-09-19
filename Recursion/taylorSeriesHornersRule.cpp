#include<iostream>
using namespace std;

double e(int x, int n){
    static double result = 1;
    if(n==0){
        return result;
    }
    result = 1+(x*result)/(n);
    return e(x,n-1);
}

int main(){
    double ans = e(1,10);
    cout<<ans<<endl;
    return 0;
}
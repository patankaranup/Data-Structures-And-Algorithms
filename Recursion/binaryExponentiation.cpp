#include<iostream>
using namespace std;
int pow(int m, int n){
    if(n==0){
        return 1;
    }
    if(n%2 == 0){
        return pow(m*m,n/2);
    } else {
        return m * pow(m*m,(n-1)/2);
    }
}
int main(){
    int ans = pow(3,1000);
    cout<<ans<<endl;
    return 0;
}
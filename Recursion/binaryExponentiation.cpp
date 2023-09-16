#include<iostream>
using namespace std;
int powR(int m, int n){
    if(n==0){
        return 1;
    }
    if(n%2 == 0){
        return powR(m*m,n/2);
    } else {
        return m * powR(m*m,(n-1)/2);
    }
}
int powIter(int m, int n){
    int ans = 1;

    while(n>0){
        // odd number 
        if(n%2 == 1){
            ans = ans * m;
            m = m*m;
        }
        else {
            m = m * m;
        }
        n /= 2;
    }
    return ans;
}
int main(){
    int ans1 = powR(3,1000);
    int ans2 = powIter(3,1000);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int factIter(int n){
    int res = 1;
    for(int i=1; i<=n; i++){
        res *= i;
    }
    return res;
}
int nCrFact(int n, int r){
    int num,denom;
    num = factIter(n);
    denom = factIter(r)*factIter(n-r);
    return num/denom;
}
int nCrRecur(int n, int r){
    if(n==r || r==0){
        return 1;
    }
    return nCrRecur(n-1,r-1) + nCrRecur(n-1,r);
}

int main(){
    int ans = nCrFact(10,2);
    int ans1 = nCrRecur(10,2);
    cout<<ans<<endl;
    cout<<ans1<<endl;
    return 0;
}
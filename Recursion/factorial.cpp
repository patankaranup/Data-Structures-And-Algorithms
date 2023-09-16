#include<iostream>
using namespace std;
int factR(int n){
    if(n==0){
        return 1;
    }
    return n * factR(n-1);
}
int factIter(int n){
    int res = 1;
    for(int i=1; i<=n; i++){
        res *= i;
    }
    return res;
}
int main(){
    int num = 5;
    int fR = factR(num);
    int fI = factIter(num);
    cout<<fR<<endl;
    cout<<fI<<endl;
    return 0;
}
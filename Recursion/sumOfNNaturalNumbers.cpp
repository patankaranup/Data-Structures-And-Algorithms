#include<iostream>
using namespace std;
int sumRecur(int n){
    if(n==0){
        return 0;
    }else {
        return n + sumRecur(n-1);
    }
}
int sumIter(int n){
    int s = 0;
    for(int i=1; i<=n; i++){
        s+=i;
    }
    return s;
}
int sumFormula(int n){
    return n*(n+1)/2;
}

int main(){
    int num = 99;
    int sumR = sumRecur(num);
    int sumI = sumIter(num);
    int sumF = sumFormula(num);
    cout<<sumI<<endl;
    cout<<sumR<<endl;
    cout<<sumF<<endl;
    return 0;
}
#include<iostream>
using namespace std;
double e(int x, int n){
    double s = 1;
    int i;
    double numerator = 1;
    double denominator = 1;
    for(i=1; i<=n; i++){
        numerator *= x;
        denominator *= i;
        s += (numerator/denominator);
    }
    return s;
}
int main(){
    double ans = e(1,10);
    cout<<ans<<endl;
    return 0;
}

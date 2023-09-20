#include<iostream>
using namespace std;
long long int steps = 0;
void TOH(int n,int A, int B, int C){
    if(n>0){
        steps++;
        TOH(n-1,A,C,B);
        cout<<"Moved "<<A<<" to "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}
int main(){
    TOH(16,1,2,3);
    cout<<steps<<endl;
    return 0;
}
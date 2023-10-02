#include<iostream>
using namespace std;

int main(){
    int A[5];
    int B[3] = {1,3,5};
    int C[4] = {1};
    int D[5] = {0};
    int E[] = {1,2,3};
    // printing address of the array element locations
    for(int i=0; i<5; i++){
        cout<<&A[i]<<endl;
    }
    return 0;
}
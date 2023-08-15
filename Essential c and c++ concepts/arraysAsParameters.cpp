#include<iostream>
#include<stdlib.h>
using namespace std;

void print(int Arr[], int n){
    for(int i=0; i<n; i++){
        cout<<Arr[i]<<endl;
    }
}
int *Arr(int n){
    int *ptr;
    ptr = (int *)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        ptr[i] = i+1;
    }
    return ptr;
}
int main(){
    cout<<"Passing Array and printing its element"<<endl;
    int A[5] = {1,3,5,7,9};
    int n = sizeof(A)/sizeof(int);
    print(A,n);
    cout<<"Creating Array and returning it "<<endl;
    int *arr = Arr(10);
    print(arr,10);
    return 0;
}
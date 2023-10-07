#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
    
};
void Display(struct Array &arr){
    cout<<"Elements are \n";
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    struct Array arr = {{2,4,6,8,0},20,5};
    Display(arr);
    return 0;
}
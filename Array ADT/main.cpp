#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array{
    int A[10];
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

void Append(struct Array &arr, int x){
    if(arr.length < arr.size){
        arr.A[arr.length] = x;
        arr.length++;
    }
}

void Insert(struct Array &arr, int index, int x){
    if(index>=0 && index<=arr.length){
        for(int i=arr.length; i>index; i--){
            arr.A[i] = arr.A[i-1];
        }
        arr.A[index] = x;
    }
}

int Delete(struct Array &arr, int index){
    int x = 0;
    if(index>=0 && index<arr.length){
        x = arr.A[index];
        for(int i = index; i<arr.length - 1; i++){
            arr.A[i] = arr.A[i+1];
        }
        arr.length--;
        return x;
    }
    return 0;
}

int main(){
    struct Array arr = {{2,4,6,8,0},10,5};
    cout<<Delete(arr,0)<<endl;
    Display(arr);
    return 0;
}
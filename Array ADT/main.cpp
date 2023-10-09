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

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int LinearSearch(struct Array &arr, int key){
    for(int i=0; i<arr.length; i++){
        if(arr.A[i] == key){
            // Using Transposition 
            // swap(arr.A[i],arr.A[i-1]);
            // Moving To front
            swap(arr.A[i],arr.A[0]);
            return i;
        }
    }
    return -1;
}

int main(){
    struct Array arr = {{2,4,6,8,0},10,5};
    cout<<LinearSearch(arr,8)<<endl;
    Display(arr);
    return 0;
}
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

int BinarySearch(struct Array arr, int key){
    int l = 0;
    int r = arr.length - 1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(arr.A[mid] == key){
            return mid;
        } else if(arr.A[mid]<key){
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    return -1;
}

int RBinSearch(int A[], int l, int h, int key){
    if(l<=h){
        int mid = l+(h-l)/2;
        if(A[mid] == key){
            return mid;
        } else if(A[mid]<key){
            return RBinSearch(A,mid+1,h,key);
        } else {
            return RBinSearch(A,l,mid-1,key);
        }
    }
    return -1;
}

int get(struct Array arr, int idx){
    if(idx>=0 && idx<arr.length){
        return arr.A[idx];
    }
    return -1;
}

void set(struct Array &arr, int idx, int val){
    if(idx>=0 && idx<arr.length){
        arr.A[idx] = val;
    }
}

int maximum(struct Array arr){
    int maxi = arr.A[0];
    for(int i=1; i<arr.length; i++){
        if(arr.A[i] > maxi){
            maxi = arr.A[i];
        }
    }
    return maxi;
}

int minimum(struct Array arr){
    int mini = arr.A[0];
    for(int i=1; i<arr.length; i++){
        if(arr.A[i] < mini){
            mini = arr.A[i];
        }
    }
    return mini;
}

int Sum(struct Array arr){
    int s = 0;
    for(int i=0; i<arr.length; i++){
        s += arr.A[i];
    }
    return s;
}

float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}

int main(){
    struct Array arr = {{2,4,6,8,9},10,5};
    cout<<get(arr,2)<<endl;
    set(arr,3,3);
    Display(arr);
    cout<<maximum(arr)<<endl;
    cout<<minimum(arr)<<endl;
    cout<<Sum(arr)<<endl;
    cout<<Avg(arr)<<endl;
    Display(arr);
    return 0;
}
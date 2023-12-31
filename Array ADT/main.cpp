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

void Reverse(struct Array &arr){
    int *B;
    int i, j;
    B = (int *)malloc(sizeof(int) * arr.length);
    for(i=arr.length-1, j=0; i>=0; i--, j++){
        B[j] = arr.A[i];
    }
    for(i=0; i<arr.length; i++){
        arr.A[i] = B[i];
    }
}

void Reverse2(struct Array &arr){
    int i, j;
    for(i=0, j=arr.length-1; i<j; i++,j--){
        swap(arr.A[i],arr.A[j]);
    }
}

void InsertSort(struct Array &arr, int x){
    if(arr.length == arr.size){
        return;
    }
    int i = arr.length - 1;
    while(i>=0 && arr.A[i] > x){
        arr.A[i+1] = arr.A[i];
        i--;
    }
    arr.A[i+1] = x;
    arr.length++;
}

int isSorted(struct Array arr){
    int i;
    for(int i=0; i<arr.length-1; i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}

void rearrange(struct Array &arr){
    int i,j;
    i = 0;
    j = arr.length - 1;
    while (i<j)
    {
        while (arr.A[i]<0)
        {
            i++;
        }
        while (arr.A[j]>=0)
        {
            j--;
        }
        if(i<j){
            swap(arr.A[i],arr.A[j]);
        }
    }
    
}

struct Array* merge(struct Array arr1, struct Array arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 = (struct Array * )malloc(sizeof(struct Array));

    while(i<arr1.length && j<arr2.length){
        if(arr1.A[i]<arr2.A[j]){
            arr3->A[k++] = arr1.A[i++];
        } else {
            arr3->A[k++] = arr2.A[j++];
        }
    }
    for(;i<arr1.length; i++){
        arr3->A[k++] = arr1.A[i];
    }
    for(;j<arr2.length; i++){
        arr3->A[k++] = arr2.A[j];
    }
    arr3->length = arr1.length + arr2.length;
    arr3->size = 10;
    return arr3;
}

struct Array* Union(struct Array arr1, struct Array arr2){
    // Time complexity O(m+n) because array is sorted 
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 = (struct Array * )malloc(sizeof(struct Array));

    while(i<arr1.length && j<arr2.length){
        if(arr1.A[i]<arr2.A[j]){
            arr3->A[k++] = arr1.A[i++];
        } else if(arr2.A[j]<arr1.A[i]){
            arr3->A[k++] = arr2.A[j++];
        } else {
            // both are equal 
            arr3->A[k++] = arr1.A[i++];
            j++;
        }
    }
    for(;i<arr1.length; i++){
        arr3->A[k++] = arr1.A[i];
    }
    for(;j<arr2.length; i++){
        arr3->A[k++] = arr2.A[j];
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array* Intersection(struct Array arr1, struct Array arr2){
    // Time complexity O(m+n) because array is sorted 
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 = (struct Array * )malloc(sizeof(struct Array));

    while(i<arr1.length && j<arr2.length){
        if(arr1.A[i]<arr2.A[j]){
            // element is small go for next one 
            i++;
        } else if(arr2.A[j]<arr1.A[i]){
            j++;
        } else if(arr1.A[i] == arr2.A[j]){
            // both are equal then copy 
            arr3->A[k++] = arr1.A[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array* Difference(struct Array arr1, struct Array arr2){
    // Time complexity O(m+n) because array is sorted 
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 = (struct Array * )malloc(sizeof(struct Array));

    while(i<arr1.length && j<arr2.length){
        if(arr1.A[i]<arr2.A[j]){
            arr3->A[k++] = arr1.A[i++];
        } else if(arr2.A[j]<arr1.A[i]){
            j++;
        } else {
            i++;
            j++;
        }
    }
    // copy remaining elements from array 1 
    for(;i<arr1.length; i++){
        arr3->A[k++] = arr1.A[i];
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

int main(){
    struct Array arr1= {{2,6,10,15,25},10,5};
    struct Array arr2= {{3,6,9,15,23},10,5};
    struct Array *arr3;
    // arr1 - arr2 
    arr3 = Difference(arr1,arr2);
    Display(*arr3);
    return 0;
}
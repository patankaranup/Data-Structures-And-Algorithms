#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    // this is created in stack frame 
    int arr[5] = {1,3,5,7,9};
    int *ptr;
    // we dont use & here because array itself has the address of the first location in memory 
    ptr = arr; 
    cout<<"First Memory address of the arrays is "<<ptr<<endl;
    cout<<"First var at address of the arrays is "<<*ptr<<endl; 
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<endl;
    }
    // Created in Heap 
    cout<<"Created in Heap"<<endl;
    int *new_ptr;
    // use this im c lang 
    new_ptr = (int *)malloc(sizeof(int) * 5);
    // use this in cpp 
    // int *ptr = new int[5];
    new_ptr[0] = 2;
    new_ptr[1] = 4; 
    new_ptr[2] = 6;
    new_ptr[3] = 8;
    new_ptr[4] = 10;

    for(int i=0; i<5; i++){
        cout<<new_ptr[i]<<endl;
    }
    // once we have dynamically alloted memory we have to delete it 
    delete []new_ptr; // in c++
    free(ptr); // in c

    return 0;
}
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    
    struct Rectangle *ptr;
    // allocating memory in heap 
    ptr = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    ptr->length = 10;
    ptr->breadth = 5;
    
    cout<<ptr->length<<endl;
    cout<<ptr->breadth<<endl;  
    return 0;
}
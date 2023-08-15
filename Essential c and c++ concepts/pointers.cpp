#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int a = 100; // data var
    int *ptr_to_a; // address var
    ptr_to_a = &a;

    cout<<"This is var a "<<a<<endl;
    cout<<"This is address of a "<<ptr_to_a<<endl;
    // here star is used to dereference 
    cout<<"This var a using ptr var "<<*ptr_to_a<<endl; 

    return 0;
}
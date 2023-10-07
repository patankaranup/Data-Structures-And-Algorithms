#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    // static array in stack 
    int a[5] = {2,4,6,8,0};
    for(int i=0; i<5; i++){
        cout<<a[i]<<endl;
    }
    // dynamic array in heap memory 
    int *p;
    p = (int *) malloc(5*sizeof(int));
    p[0] = 2;
    p[1] = 3;
    p[2] = 4;
    p[3] = 5;
    p[4] = 9;
    for(int i=0; i<5; i++){
        cout<<p[i]<<endl;
    }
    return 0;
}
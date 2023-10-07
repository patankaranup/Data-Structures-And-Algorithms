#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int *p, *q;
    p = (int *) malloc(5*sizeof(int));
    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;
    p[4] = 0;
    // creating new array in heap with increase size
    q = new int[10];
    // copying element from p to q;
    for(int i=0; i<5; i++){
        q[i] = p[i];
    }
    // delelting p array in heap 
    free(p);
    // pointing p to q
    p = q;
    // making q point to NULL 
    q = NULL;
    for(int i=0; i<7; i++){
        cout<<p[i]<<endl;
    }
    // Address of p and q
    cout<<p<<endl;
    cout<<q<<endl;
    return 0;
}
#include<iostream>
#include<stdio.h>
using namespace std;

// Structure definition 
struct Rectangle
    {
        // struct members 
        int length; // 4 bytes 
        int breadth; // 4 bytes 
        char character; // 1 byte but will take 4 bytes for easy proccesing
    };
int main(){
    struct Rectangle r1,r2,r3;    
    r1.length = 5;
    r1.breadth = 2;
    r1.character = 'a';
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    cout<<r1.character<<endl;
    printf("%lu",sizeof(r1));
    return 0;
 }
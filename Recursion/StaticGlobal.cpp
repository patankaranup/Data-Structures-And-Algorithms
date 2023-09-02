#include<iostream>
#include<stdlib.h>
using namespace std;
// global variable 
int y = 0; 
int fun(int n){
    // static variable 
    static int x = 0;
    if(n>0){
        x++;
        y++;
        return fun(n-1) + x+y;
    }
    return 0;
}

int main(){
    int a = 5;
    cout<<fun(a)<<endl;
    cout<<fun(a)<<endl;
    return 0;
}
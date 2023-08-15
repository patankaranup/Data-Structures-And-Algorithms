#include<iostream>
#include<stdlib.h>
using namespace std;

int add (int num1, int num2){
    return num1+num2;
}

int main(){
    int a = 10;
    int b = 10;
    int sum;
    sum = add(a,b);
    cout<<sum<<endl;
    return 0;
}
#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int num1,num2;
    num1 = 10;
    num2 = 8;
    cout<<"Call by Value no change in variable"<<endl;
    cout<<"Before Swapping "<<num1<<" "<<num2<<endl;
    swap(num1,num2);
    cout<<"After Swapping "<<num1<<" "<<num2<<endl;
}

#include<iostream>
#include<stdlib.h>
using namespace std;
void fun1(int x){
    if(x>0){
        cout<<x<<endl;
        fun1(x-1);
    }
}
int main(){
    int x = 3;
    fun1(x);
    return 0;
}
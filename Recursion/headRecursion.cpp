#include<iostream>
#include<stdlib.h>
using namespace std;
void fun2(int x){
    if(x>0){
        fun2(x-1);
        cout<<x<<endl;
    }
}
int main(){
    int x = 3;
    fun2(x);
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a = 19;
    // alias of a 
    int &ref = a;
    cout<<"Inititally Both are same"<<endl;
    cout<<a<<endl;
    cout<<ref<<endl; 
    cout<<"Change the ref variable we can see both ref and a is changed"<<endl;
    ref = 25;
    cout<<a<<endl;
    cout<<ref<<endl; 
    cout<<"Change the value of ref to another variable "<<endl;
    int b = 108;
    ref = b;
    cout<<a<<endl;
    cout<<ref<<endl; 
    return 0;
}
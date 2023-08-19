#include<iostream>
#include<stdlib.h>
using namespace std;
struct Rectangle{
    int l;
    int b;
};
int callByValueArea(struct Rectangle r1){
    r1.l = 15;
    return r1.l * r1.b;
}
int callByAddressArea(struct Rectangle *r1){
    r1->l = 15;
    return r1->l * r1->b;
}
int main(){
    struct Rectangle r1 = {10,5};
    cout<<r1.l<<endl;
    cout<<r1.b<<endl; 
    cout<<"Call by Value Area "<<callByValueArea(r1)<<endl;
    cout<<r1.l<<endl;
    cout<<r1.b<<endl; 
    cout<<"Call by Address Modified Length "<<callByAddressArea(&r1)<<endl;
    cout<<r1.l<<endl;
    cout<<r1.b<<endl; 
    return 0;
}
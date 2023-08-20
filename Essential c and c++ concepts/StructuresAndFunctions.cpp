#include<iostream>
#include<stdio.h>
using namespace std;
struct Rectangle 
{
    int l;
    int b;
};
int findArea(struct Rectangle r){
    return r.l * r.b;
}
int findPerimeter(struct Rectangle r){
    return 2*(r.l+r.b);
}
void initStruct(struct Rectangle *r,int l, int b){
    r->l = l;
    r->b = b;
}
int main(){
    struct Rectangle r = {0,0};
    initStruct(&r,10,5);
    int area = findArea(r);
    int peri = findPerimeter(r);
    cout<<area<<endl;
    cout<<peri<<endl;   
    return 0;
}
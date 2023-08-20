#include<iostream>
#include<stdio.h>
using namespace std;
int area(int l, int b){
    return l*b;
};
int perimeter(int l, int b){
    return 2*(l+b);
}
int main(){
    int len = 10;
    int bre = 5;
    int are = area(len,bre);
    int peri = perimeter(len,bre);
    cout<<"Area is "<<are<<endl;
    cout<<"Perimeter is "<<peri<<endl;
    return 0;
}
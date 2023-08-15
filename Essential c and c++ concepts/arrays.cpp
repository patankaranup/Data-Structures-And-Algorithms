#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int Arr1[10] = {1,3,5,7,9};
    for (int i = 0; i < 10; i++)
    {
        cout<<Arr1[i]<<endl;
    }
    cout<<sizeof(Arr1);
    return 0;
}

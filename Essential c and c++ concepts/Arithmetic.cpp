#include<iostream>
#include<stdio.h>
using namespace std;

template<class T>
class Arithmetic
{
private:
    T a;
    T b;
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
    ~Arithmetic();
};
template<class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template<class T>
T Arithmetic<T>::add(){
    return this->a + this->b;
}
template<class T>
T Arithmetic<T>::sub(){
    return this->a - this->b;
}
template<class T>
Arithmetic<T>::~Arithmetic()
{
    cout<<"Destructor Called Object destroyed \n";
}


int main(){
    Arithmetic<int> arInt(10,5);
    cout<<arInt.add()<<endl;
    cout<<arInt.sub()<<endl;
    Arithmetic<float> arFloat(12.34,5.56);
    cout<<arFloat.add()<<endl;
    cout<<arFloat.sub()<<endl; 
    return 0;
}
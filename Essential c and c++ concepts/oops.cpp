#include<iostream>
#include<stdio.h>
using namespace std;
class Rectangle 
{
    private:
        int l;
        int b;
    
    public:
        Rectangle(){
            l = 0;
            b = 0;
        }
        Rectangle(int l, int b){
            l = l;
            b = b;
        }
        int findArea(){
            return l * b;
        }       
        int findPerimeter(){
            return 2*(l+b);
        }
        void init(int len, int bre){
            l = len;
            b = bre;
        }
        ~Rectangle(){
            cout<<"Destructor Called for deallocating dynamic memory occupied by object"<<endl;
        }
        
};
int main(){
    Rectangle r;
    r.init(100,50);
    int area = r.findArea();
    int peri = r.findPerimeter();
    cout<<area<<endl;
    cout<<peri<<endl;   
    return 0;
}
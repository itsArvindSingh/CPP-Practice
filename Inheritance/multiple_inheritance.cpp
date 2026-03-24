#include<iostream>
using namespace std;
class A{
    public:
    int x;
    void getx(){
        cout<<"Enter the value of the x : ";
        cin>>x;
    }
};
class B{
    public:
    int y;
    void gety(){
        cout<<"Enter the value of the y : ";
        cin>>y;
    }
};
class C: public A, public B{
    public:
    void sum(){
        cout<<"Sum is "<<x+y<<endl;
    }
    void product(){
        cout<<"product is "<<x*y<<endl;
    }
};
int main(){
    C obj;
    obj.getx();
    obj.gety();
    obj.sum();
    obj.product();
    return 0;
}
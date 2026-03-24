#include<iostream>
using namespace std;
class A{
    public:
    int x,y;
    void getdata(){
        cout<<"Enter the value of the x and y : ";
        cin>>x>>y;
    }
};
class B: public A{
    public :
    void product(){
        cout<<"Product is "<<x*y<<endl;
    }
};
class C: public A{
    public :
    void sum(){
        cout<<"Sum is "<<x+y<<endl;
    }
};
int main(){
    B obj1;
    C obj2;
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();
    return 0;
}
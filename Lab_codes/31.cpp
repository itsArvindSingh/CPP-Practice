#include<iostream>
using namespace std;
class First {
    public:
    virtual void display(){
        cout<<"print the First class "<<endl;
    }
};
class second:public First{
    public :
    void display()  {
        cout<<"print the second class "<<endl;
    }
};
int main(){
    First *ptr;
    second p;
    ptr=&p;
    ptr->display();
    First c;
    ptr=&c;
    ptr->display();
    return 0;
}
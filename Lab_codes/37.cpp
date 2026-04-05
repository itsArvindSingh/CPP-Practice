#include<iostream>
using namespace std;
template<class T>
class Calculator{
public:
    T a, b;
    void input(){
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }
    void add(){
        cout<<"Addition = "<<a+b<<endl;
    }
    void sub(){
        cout<<"Subtraction = "<<a-b<<endl;
    }
    void mul(){
        cout<<"Multiplication = "<<a*b<<endl;
    }
    void div(){
        if(b != 0)
            cout<<"Division = "<<a/b<<endl;
        else
            cout<<"Cannot divide by zero"<<endl;
    }
};
int main(){
    Calculator<int> c;
    c.input();
    c.add();
    c.sub();
    c.mul();
    c.div();
    return 0;
}
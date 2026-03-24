#include<iostream>
using namespace std;
class A{
    public:
    int x;
};
class B: public A{
    public:
    B(){
        x=23;
    }
};
class C{
    public :
    int y;
    C(){
        y=89;
    }
};
class D: public B, public C{
    public:
    void sum(){
        cout<<"Sum is "<<x+y<<endl;
    }
};
int main(){
    D obj;
    obj.sum();
    return 0;
}
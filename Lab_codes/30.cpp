#include<iostream>
using namespace std;
class First{
    int num;
    protected:
    int num1;
    public:
    int num2;
    void set_num(){
        num=34;
        num1=57;
        num2=90;
    }
    void print(){
        cout<<"Private data member value : "<<num<<endl;
    }
};
class Second: public First{
    public:
    void print1(){
        print();
        cout<<"Protected data member value : "<<num1<<endl;
        cout<<"Public data member value : "<<num2<<endl;
    }

};
int main(){
    Second s;
    s.set_num();
    s.print1();
    return 0;
}
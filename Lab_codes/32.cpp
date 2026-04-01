#include<iostream>
using namespace std;
class  First{
    public :
    virtual void draw()=0;
};
class Second: public First{
    public :
    void draw(){
        cout<<"print the second class"<<endl;
    }
};
class third: public First{
    public :
    void draw(){
        cout<<"print the third class"<<endl;
    }
};
int main(){
    First *ptr;
    Second D;
    third t;
    ptr=&D;
    ptr->draw();
    ptr=&t;
    ptr->draw();
    return 0;
}
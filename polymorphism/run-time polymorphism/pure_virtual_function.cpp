#include<iostream>
using namespace std;
class Person{
    public:
    virtual void show()=0;
};
class Man:public Person{
    public :
    void show(){
        cout<<"Man is also person"<<endl;
    }
};
int main(){
    Person *aptr;
    Man m;
    aptr=&m;
    aptr->show();
    return 0;
}
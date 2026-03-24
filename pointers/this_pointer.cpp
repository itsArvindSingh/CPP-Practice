#include<iostream>
using namespace std;
class stud{
    private :
    int a;
    public:
    void set(int a){
        this->a=a;
    }
    void show(){
        cout<<"value of a is : "<<a<<endl;
    }
};
int main(){
    stud s1,s2;
    s1.set(34);
    s1.show();
    s2.set(45);
    s2.show();
    return 0;
}
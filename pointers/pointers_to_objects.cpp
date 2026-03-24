#include<iostream>
//#include<string>
using namespace std;
class employee{
    private:
    int code;
    string name;
    public:
    void setdata(int c, string s){
        code=c;
        name=s;
    }
    void display(){
        cout<<"Employee Code : "<<code<<endl;
        cout<<"Employee Name : "<<name<<endl;
    }
};
int main(){
    employee e1;
    employee *ptr;
    ptr=&e1;
    ptr->setdata(25643,"Arvind Singh");
    ptr->display();
    return 0;
}
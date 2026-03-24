#include<iostream>
using namespace std;
class base{
    public:
    int x;
    void getdata(){
        cout<<"Enter value of x : ";
        cin>>x;
    }
};
class derived: public base{
    private:
    int y;
    public:
    void readdata(){
        cout<<"Enter value of y : ";
        cin>>y;
    }  
    void product(){
        cout<<"Product is "<<x*y;
    }
};
int main(){
    derived d;
    d.getdata();
    d.readdata();
    d.product();
    return 0;
}
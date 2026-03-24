#include <iostream>
using namespace std;
class Add // Base class
{
    public:
    virtual void print(){ // Virtual function
        int a = 20, b = 30;
        cout << "Base class Action: " << a + b << endl;}
    void show() {// Non-virtual function    
        cout << "Show base class" << endl;
    }
};
class Sub : public Add // Derived class
{
    public:
    void print() override // Overriding virtual function
    {
        int x = 20, y = 10;
        cout << "Derived class Action: " << x - y << endl;
    }
    void show() // Overriding non-virtual function
    {
        cout << "Show derived class" << endl;
    }
};
int main()
{
    Add* aptr; // Base class pointer
    Sub s;
    aptr = &s;
    aptr->print(); // Calls Derived class function (dynamic binding)
    aptr->show(); // Calls Base class function (static binding)
    return 0;
}
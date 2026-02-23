#include <iostream>
using namespace std;
class Calculator {
    int num1,num2;
    public:
    void setnumber(int a, int b){
        num1=a;
        num2=b;
    }
    int getsum(){
        return num1+num2;
    }
};
int main() {
    Calculator C1;
    int a,b;
    cout<<"Enter Two Number : ";
    cin>>a>>b;
    C1.setnumber(a,b);
    cout<<"Sum is "<<C1.getsum()<<endl;
    return 0;
}

#include <iostream>
using namespace std;
class SafeDivision {
private:
    float num1,num2;
public:
    void getData(){
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
    }
    void calculate(){
        try {
            if (num2==0) {
                throw num2;
            }
            float result=num1/num2;
            cout<<"Result = "<<result<<endl;
        }
        catch (float x) {
            cout<<"Error: Division by zero is not allowed."<<endl;
        }
    }
};
int main() {
    SafeDivision obj;
    obj.getData();
    obj.calculate();
    return 0;
}
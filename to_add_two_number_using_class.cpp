#include <iostream>
using namespace std;
class Calculator {
    public:
    int add(int x, int y){
        return x+y;
    }
};
int main() {
    Calculator C1;
    int a,b;
    cout<<"Enter Two Number : ";
    cin>>a>>b;
    cout<<"Sum is "<<C1.add(a,b)<<endl;
    return 0;
}

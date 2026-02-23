#include <iostream>
using namespace std;
class Calculator {
    public:
    int add(int x, int y);
};
int Calculator:: add(int x, int y){
    return x+y;
}

int main() {
    Calculator C1;
    cout<<"Sum is "<<C1.add(3,5)<<endl;
    return 0;
}

#include <iostream>
using namespace std;
class PrimeChecker {
    private:
    int number;
    public:
    void setnumber(int a){
        number=a;
    }
    bool isPrime(){
        if (number<=1){
            return false;
        }
        for (int i=2;i*i<=number;i++){
            if (number%i==0){
                return false;
            }
        }
    return true;
    }
};
int main() {
    PrimeChecker Checker;
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    Checker.setnumber(num);
    if (Checker.isPrime()){
        cout<<num<<" is Prime Number."<<endl;
    }
    else {
        cout<<num<<" not a prime number."<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int num;
    int fac=1;
    cout<<"Enter Number : ";
    cin>>num;
    for (int i=1;i<=num;i++){
        fac*=i;
    }
    cout<<"The Factorial of "<<num<<" is "<<fac<<endl;
    return 0;
}

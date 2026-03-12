#include<iostream>
using namespace std;
inline int multiply(int a, int b){
    return a*b;
}
inline int cube(int c){
    return c*c*c;
}
int main(){
    int num1, num2, num3;
    cout<<"Enter two numbers : "<<endl;
    cin>>num1>>num2;
    cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<multiply(num1,num2)<<endl;
    cout<<"Enter a number to find the cube of the number : "<<endl;
    cin>>num3;
    cout<<"cube of "<<num3<< " is "<<cube(num3);
    return 0;
}

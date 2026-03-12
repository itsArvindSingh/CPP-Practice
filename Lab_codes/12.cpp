#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int division(int a, int b){
    if (b==0){
        cout<<"Denominator Can't be Zero";
        return 0;
    }
    else {
        return a/b;
    }
}
int mod(int a, int b){
    return a%b;
}

int main(){
    int a,b;
    cout<<"Enter Two Numbers : ";
    cin>>a>>b;
    char choice;
    cout<<"Enter Your choice(+,-,*,/,%) : ";
    cin>>choice;
    switch (choice) {
        case '+':
        cout<<"result is "<<add(a,b);
        break;
        case '-':
        cout<<"result is "<<subtract(a,b);
        break;
        case '*':
        cout<<"result is "<<multiply(a,b);
        break;
        case '/':
        cout<<"result is "<<division(a,b);
        break;
        case '%':
        cout<<"result is "<<mod(a,b);
        break;
        default :
        cout<<"Invalid Choice.";
    }
    return 0;
}

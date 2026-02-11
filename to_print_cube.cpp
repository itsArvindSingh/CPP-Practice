#include<iostream>
using namespace std;
int cube(int a){
    return a*a*a;
}
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int result=cube(num);
    cout<<"Cube of "<<num<<" is "<<result;
    return 0;
}

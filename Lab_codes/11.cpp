#include<iostream>
using namespace std;
int main(){
    int num,reverse=0;
    cout<<"Enter Number : ";
    cin>>num;
    while (num>0){
        reverse=reverse*10+num%10;
        num/=10;
    }
    cout<<"The reverse of the number is : "<<reverse;
    return 0;
}

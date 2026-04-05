#include<iostream>
using namespace std;
template<class T>
void swap(int &a, int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}
int main(){
    int x=20, y=30;
    cout<<"x and y before swapping:"<<endl;
    cout<<"x="<<x<<" y="<<y<<endl;
    swap(x,y);
    cout<<"x and y after swapping:"<<endl;
    cout<<"x="<<x<<" y="<<y<<endl;
    return 0;
}
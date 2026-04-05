#include<iostream>
using namespace std;
template<class T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}
int main()
{
    int x=10,y=20;
    float p=5.5,q=3.2;
    char a='A',b='B';
    cout<<"Max of integers: "<<findMax(x,y)<<endl;
    cout<<"Max of floats: "<<findMax(p,q)<<endl;
    cout<<"Max of char: "<<findMax(a,b)<<endl;
    return 0;
}
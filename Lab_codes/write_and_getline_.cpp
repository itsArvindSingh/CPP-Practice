#include<iostream>
using namespace std;
int main(){
    char b[45];
    cout<<"Enter string: ";
    cin.getline(b,45);
    cout<<b<<endl;
    cout.write(b,5);
    return 0;
}
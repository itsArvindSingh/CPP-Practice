#include<iostream>
using namespace std;
class abc{
     int a;
     public:
     abc(int a1){
        a=a1;
     }
     void show(){
        cout<<"Value of a is "<<a<<endl;
     }
     operator int(){
        return a;
     }
};
int main(){
    int m=40;
    abc x=m;
    x.show();
    int y=x;
    cout<<"Class to Basic "<<y<<endl;
    return 0;
}

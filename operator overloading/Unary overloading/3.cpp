#include<iostream>
using namespace std;
class abc{
    int m,n;
    public:
    abc(){
        m=8;
        n=9;
    }
    void show(){
        cout<<"m : "<<m<<endl<<"n : "<<n<<endl;
    }
    void operator--(){
        --m;
        --n;
    }
};
int main(){
    abc x;
    x.show();
    --x;
    x.show();
    return 0;
}
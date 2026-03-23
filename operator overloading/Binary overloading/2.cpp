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
    abc operator*(abc y){
        abc b;
        b.m=m*y.m;
        b.n=n*y.n;
        return b;
    }
};
int main(){
    abc x,y,z;
    z=x*y;
    z.show();
    return 0;
}
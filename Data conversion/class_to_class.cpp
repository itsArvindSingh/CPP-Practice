// Conversion from one Class to another Class type
#include<iostream>
using namespace std;
class rectangle{
    int width,length, area;
    public:
    rectangle(){}
    rectangle(int w, int l){
        width=w;
        length=l;
        area=length*width;
    }
    void print(){
        cout<<"length "<<length<<endl;
        cout<<"width "<<width<<endl;
        cout<<"area "<<area<<endl;
    }
};
class triangle{
    int base, height, area;
    public:
    triangle(int b, int h){
        base=b;
        height=h;
        area=0.5*base*height;
    }
    void show(){
        cout<<"base "<<base<<endl;
        cout<<"height "<<height<<endl;
        cout<<"area "<<area<<endl;
    }
    operator rectangle(){
        rectangle tmp(base, height);
        return tmp;
    }
};
int main(){
    triangle t(10,10);
    rectangle r;
    r=t;
    t.show();
    r.print();
    return 0;
}
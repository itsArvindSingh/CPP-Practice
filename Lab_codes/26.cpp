#include <iostream>
using namespace std;
class Complex {
    public:
    float real, imag;
    Complex() : real(0), imag(0){}
    void input(){
        cin>>real>>imag;
    }
    void output(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
   friend Complex addcomplex(Complex, Complex);
};
Complex addcomplex(Complex c1, Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}
int main() {
    Complex c1, c2, result;
    cout<<"Enter First complex number (Real and imaginary parts) : ";
    c1.input();
    cout<<"Enter Second complex number (Real and imaginary parts) : ";
    c2.input();
    result=addcomplex(c1, c2);
    cout<<"Sum ";
    result.output();
    return 0;
}

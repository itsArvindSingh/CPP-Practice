#include<iostream>
using namespace std;
#define Pi 3.14
float area(float r){
    return (Pi*r*r);
}
float area(float l,float w){
    return (l*w);
}
float area(float b, float h, bool istriangle){
    return (0.5*b*h);
}
int main(){
    float base,height,length, width,radius;
    cout<<"Enter the length and width of the rectangle : "<<endl;
    cin>>length>>width;
    cout<<"Area of the rectangle is "<<area(length,width)<<endl;
    cout<<"Enter radius of the circle : "<<endl;
    cin>>radius;
    cout<<"Area of the circle is "<<area(radius)<<endl;
    cout<<"Enter the base and height of the triangle : "<<endl;
    cin>>base>>height;
    cout<<"Area of the triangle is "<<area(base, height, true);
    return 0;
}

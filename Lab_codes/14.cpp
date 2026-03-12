#include<iostream>
using namespace std;
#define Pi 3.14
float area_circle(float r){
    return Pi*r*r;
}
float area_rectangle(float w, float l){
    return w*l;
}
float area_triangle(float b, float h){
    return 0.5*b*h;
}
int main(){
    float radius, height, length, width, base;
    cout<<"Enter the radius of the circle : "<<endl;
    cin>>radius;
    cout<<"Area of circle is "<<area_circle(radius)<<endl;
    cout<<"Enter the height and base of the triangle : "<<endl;
    cin>>height>>base;
    cout<<"Area of the triangle is "<<area_triangle(height,base)<<endl;
    cout<<"Enter the width and length of the rectangle : "<<endl;
    cin>>width>>length;
    cout<<"Area of the rectangle is "<<area_rectangle(width,length)<<endl;
    return 0;
}

#include<iostream>
using namespace std;
#define Pi 3.14
float volume(float l){
    return (l*l*l);
}
float volume(float r,float h){
    return (Pi*r*r*h);
}
float volume(float r, bool issphere){
    return (Pi*r*r*r)*(4.0/3.0);
}
int main(){
    float side,height,radius;
    cout<<"Enter the side length of the cube : "<<endl;
    cin>>side;
    cout<<"Volume of the Cube is "<<volume(side)<<endl;
    cout<<"Enter radius and height of the cylinder : "<<endl;
    cin>>radius>>height;
    cout<<"Volume of the cylinder is "<<volume(radius,height)<<endl;
    cout<<"Enter the radius of the sphere : "<<endl;
    cin>>radius;
    cout<<"Volume of the sphere is "<<volume(radius, true);
    return 0;
}

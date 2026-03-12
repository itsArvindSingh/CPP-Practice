//converting from fahrenheit to centigrade and cenyrigrade to fahrenheit using function
#include<iostream>
using namespace std;
float centi_to_fahr(float c){
    return (c*(9.0/5.0)+32);
}
float fahr_to_centi(float f){
    return (f-32)*(5.0/9.0);
}
int main(){
    float centi, fahr;
    cout<<"Enter temperature in centigrade : "<<endl;
    cin>>centi;
    cout<<"Temperature in Fahrenheit is "<<centi_to_fahr(centi)<<endl;
    cout<<"Enter temperature in Fharenheit : "<<endl;
    cin>>fahr;
    cout<<"Temperature in centigrade is "<<fahr_to_centi(fahr)<<endl;
    return 0;
}

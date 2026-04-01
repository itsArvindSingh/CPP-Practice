#include<iostream>
using namespace std;
class class_name {
    private :
    int num;
    public:
    void get_number(){
        cout<<"Enter Number: ";
        cin>>num;
    }
    void odd_display(){
        int sum=0;
        cout<<"n term of odd natural number is "<<endl;
        for (int i=1; i<=num ; i+=2){
            sum+=i;
            cout<<i<<"  ";
        }
        cout<<endl<<"Sum is "<<sum<<endl;
    }
};

int main(){
    class_name o;
    o.get_number();
    o.odd_display();
    return 0;
}
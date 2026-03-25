#include<iostream>
using namespace std;
class Patient{
    protected:
    string name;
    int age;
    string gender;
    public:
    void details(){
        cout<<"Enter name of the patient : ";
        getline(cin,name);
        cout<<"Enter gender of the patient : ";
        getline(cin,gender);
        cout<<"Enter age of the patient : ";
        cin>>age;
    }
};
class display_details: public Patient{
    protected:
    string disease;
    int patient_id;
    public :
    void details_n(){
        cout<<"Enter Name of the disease : ";
        cin>>disease;
        cout<<"Enter patient id : ";
        cin>>patient_id;
    }
    void print(){
        cout<<"Name of the patient is "<<name<<endl;
        cout<<"Age of the patient is "<<age<<endl;
        cout<<"Gender of the patient is "<<gender<<endl;
        cout<<"Name of the disease is "<<disease<<endl;
        cout<<"Patient id is "<<patient_id<<endl;
    }

};
int main(){
    display_details p;
    p.details();
    p.details_n();
    p.print();
    return 0;
}
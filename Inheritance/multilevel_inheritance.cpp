#include<iostream>
#include<string>
using namespace std;
class stud{
    private:
    string name;
    int rollno;
    public:
    void getinfo(){
        cout<<"Enter Name of the student : ";
        getline(cin,name);
        cout<<"Enter Roll no. of the student : ";
        cin>>rollno;
    }
    void showinfo(){
        cout<<"Name of the student is "<<name<<endl;
        cout<<"Roll no. of the student is "<<rollno<<endl;
    }
};
class exam: public stud{
    public:
    int maths_marks, phy_marks, chem_marks;
    void get_marks(){
        cout<<"Enter Maths marks : ";
        cin>>maths_marks;
        cout<<"Enter physics marks : ";
        cin>>phy_marks;
        cout<<"Enter chemistry marks : ";
        cin>>chem_marks;
    }
    void show_marks(){
        cout<<"Maths marks is "<<maths_marks<<endl;
        cout<<"Physic marks is "<<phy_marks<<endl;
        cout<<"Chemsitry marks is "<<chem_marks<<endl;
    }
};
class result: public exam{
    public:
    int total;
    void show_result(){
        total=maths_marks+phy_marks+chem_marks;
        cout<<"Your marks total is "<<total;
    }
};
int main(){
    result obj;
    obj.getinfo();
    obj.get_marks();
    obj.showinfo();
    obj.show_marks();
    obj.show_result();
    return 0;
}
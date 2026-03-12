#include <iostream>
#include<string>
using namespace std;
class Student {
    private: 
    string Name;
    int Rollno;
    int age;
    public:
    void readstudentinfo(){
        cout<<"Enter Student Name : ";
        getline(cin, Name);
        cout<<"Enter Student age : ";
        cin>>age;
        cout<<"Enter Student Roll Number : ";
        cin>>Rollno;
    }
    void printstudentinfo(){
        cout<<"Student Name is "<<Name<<endl;
        cout<<"Age is "<<age<<endl;
        cout<<"Roll number is "<<Rollno<<endl;
    }
   
};
int main() {
    Student S1;
    S1.readstudentinfo();
    S1.printstudentinfo();
    return 0;
}

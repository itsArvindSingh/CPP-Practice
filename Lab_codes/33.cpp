#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    ofstream fout;
    string data;
    fout.open("abc.txt");
    if (!fout){
        cout<<"Error opening file"<<endl;
        return 1;
    }
    fout<<"Hello, Your file is open "<<endl;
    fout<<"second line";
    fout.close();

    fin.open("abc.txt");
    if (!fin){
        cout<<"Error opening file"<<endl;
        return 0;
    }
    cout<<"Your file is opened successfully."<<endl;
    while (getline(fin,data)){
        cout<<data<<endl;
    }
    fin.close();
    return 0;
}
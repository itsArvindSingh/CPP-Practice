#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int ch;
    string s;
    do{
        cout<<"\n1.Add 2.Append 3.Display 4.Exit\n";
        cin>>ch;
        if(ch==1){
            ofstream f("a.txt");
            cout<<"Enter text: ";
            cin>>s;
            f<<s;
            f.close();
        }
        else if(ch==2){
            ofstream f("a.txt", ios::app);
            cout<<"Enter text: ";
            cin>>s;
            f<<" "<<s;
            f.close();
        }
        else if(ch==3){
            ifstream f("a.txt");
            while(f>>s)
                cout<<s<<" ";
            f.close();
        }
    }while(ch!=4);
    return 0;
}
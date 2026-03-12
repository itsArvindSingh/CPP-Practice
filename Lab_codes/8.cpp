#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    for (int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
    }
    string revstr=str;
    reverse(revstr.begin(),revstr.end());
    if (revstr==str){
        cout<<"Palindrome"<<endl;
    }
    else {
        cout<<"Not a Pailndorme"<<endl;
    }
    return 0;
}

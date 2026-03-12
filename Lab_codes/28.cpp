#include<iostream>
using namespace std;
class Alpha{
    public:
    Alpha(){
        cout<<"Object created."<<endl;
    }
    ~Alpha(){
        cout<<"Object destroyed."<<endl;
    }
};
int main(){
    {
        Alpha A1;
        cout<<"Inside block"<<endl;
    }
    cout<<"Outside block"<<endl;
    return 0;
}

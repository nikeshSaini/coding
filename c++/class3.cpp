#include<iostream>

using namespace std;
class data{
    public:
    string name;
    string mail;
    void input(){
        cin>>name;
        cin>>mail;
    }
    void disp(){
        cout<<"Name:"<<name<<endl<<"mail:"<<mail;
    }
    

};

int main(){
    
    int n;
    cout<<"enter the number:";
    cin>>n;
    data d[n];
    for(int i=0;i<n;i++){
        d[i].input();
    }
    cout<<"detail:\n";
    for(int i=0;i<n;i++){
        d[i].disp();
    }

}


    

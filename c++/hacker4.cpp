#include<bits/stdc++.h>
using namespace std;
int find(char ch){int type;
    if(ch=='a'||ch=='A'){
        type=0;
    }
    else if(ch=='b'  ||ch=='B'){
        type=1;
    }
    else if(ch=='c'||ch=='C'){
        type=2;
    }
    else if(ch=='d'||ch=='D'){
        type=3;
    }
    else if(ch=='e'||ch=='E'){
        type=4;
    }
    else if(ch=='f'||ch=='F'){
        type=5;
    }
    else if(ch=='g'||ch=='G'){
        type=6;
    }
    else if(ch=='h'||ch=='H'){
        type=7;
    }
    else if(ch=='i'||ch=='I'){
        type=8;
    }
    else if(ch=='j'||ch=='J'){
        type=9;
    }
    else if(ch=='k'||ch=='K'){
        type=10;
    }
    else if(ch=='l'||ch=='L'){
        type=11;
    }
    else if(ch=='m'||ch=='M'){
        type=12;
    }
    else if(ch=='n'||ch=='N'){
        type=13;
    }
    else if(ch=='o'||ch=='O'){
        type=14;
    }
    else if(ch=='p'||ch=='P'){
        type=15;
    }
    else if(ch=='q'||ch=='Q'){
        type=16;
    }
    else if(ch=='r'||ch=='R'){
        type=17;
    }
    else if(ch=='s'||ch=='S'){
        type=18;
    }
    else if(ch=='t'||ch=='T'){
        type=19;
    }
    else if(ch=='u'||ch=='U'){
        type=20;
    }
    else if(ch=='v'||ch=='V'){
        type=21;
    }
    else if(ch=='w'||ch=='W'){
        type=22;
    }
    else if(ch=='x'||ch=='X'){
        type=23;
    }
    else if(ch=='y'||ch=='Y'){
        type=24;
    }
    else if(ch=='Z'||ch=='z'){
        type=25;
    }
return type;
}
int main(){
    string name;
    int arr[25];
    for(int i = 0; i < 26; i++)
    {
        cin>>arr[i];//code input
    }
    cin>>name;//string input
    int far[name.size()];
    for(int i=0;i<name.size();i++){
         far[i]=find(name[i]);
    }
    int comp[name.size()];
    for (int i = 0; i < name.size(); i++)
    {
        comp[i]=arr[far[i]];
        // cout<<comp[i]<<" ";
    }
    int h=0;
for (int i = 0; i < name.size(); i++)
{
    if(comp[i]>h){
        h=comp[i];
    }
}
cout<<h*name.size();


}
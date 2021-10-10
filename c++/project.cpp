#include <iostream>
using namespace std;
//base class intialize
class base
{
protected:
int id;
string name;
public:
void getbase()
{
cout<<"Enter ID: ";
cin>>id;
cin.ignore();
cout<<"Enter Name: ";
getline(cin,name);
}
void displaybase()
{
cout<<"\n\t\t\tName: "<<name;
cout<<"\t\t\tId: "<<id;
}
};
//base class ending

//teacher class starting
class teacher: public base
{
string q;
string w;
public:
void getteacher()
{
getbase();
cout<<"Enter details of subject: ";
getline(cin,q);
cout<<"Enter details of publication: ";
getline(cin,w);
}
void displayteach()
{
displaybase();
cout<<"\n\t\t\tSubject: "<<q;
cout<<"\t\t\tPublication: "<<w;
}
};//teacher class ending

//officer class starting
class officer: public base
{
char grade;
public:
void getofficer()
{
getbase();
cout<<"Enter Grade: ";
cin>>grade;
}
void displayofficer()
{
displaybase();
cout<<"\n\t\t\tGrade: "<<grade;
}
};//teacher class ending

//typist class starting
class typist: public base
{
float tyspeed;
public:
void gettypist()
{
getbase();
cout<<"Enter Typing speed in words per second: ";
cin>>tyspeed;
}
void displaytypist()
{
displaybase();
cout<<"\n\t\t\tTyping speed in words per second: "<<tyspeed;
}
};
class dailywage: public typist
{
float dailywage;
public:
void wages()
{
gettypist();
cout<<"Enter daily wage: ";
cin>>dailywage;
}
void displaywages()
{
displaytypist();
cout<<"\n\t\t\tDaily wage: "<<dailywage;
}
};



int main()                      //starting of main
{
int t,o,ty;
cout<<"Enter the number of teachers: ";
cin>>t;
cout<<"Enter the number of officers: ";
cin>>o;
cout<<"Enter the number of typists: ";
cin>>ty;
teacher t1[t];
officer o1[o];
dailywage d[ty];
int choice,i;
char y_n;
while(1)
{
int count;
start:
cout<<"\n=====EDUCATION INSTITUTION DATABASE=====\n\n\n";
cout<<"Choose Category of Information\n";
cout<<"1)  Teachers\n";
cout<<"2)  Officer\n";
cout<<"3)  Typist\n";
cout<<"4)  Exit\n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice)
{
case 1: while(1)
{
cout<<"\n=====TEACHERS INFORMATION=====\n\n";
cout<<"\nChoose your choice\n";
cout<<"1) Create\n";
cout<<"2) Display\n";
cout<<"3) Jump to Main Menu\n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice)
{case 1 : for(count=0,i=0;i<t;i++)
{
cout<<endl;
t1[i].getteacher();
count++;
cout<<endl;
cout<<"\n\nAre you Interested in entering data\n";
cout<<"Enter y for yes and n for no :";
cin>>y_n;
if(y_n=='y' || y_n=='Y')
continue;
else goto out1;
}
out1:
break;
case 2 : for(i=0;i<count;i++)
{
cout<<endl;
t1[i].displayteach();
cout<<endl;
}
break;
case 3 : goto start;
default: cout<<"\nEnter choice is invalid\ntry again\n\n";
}
}
case 2 :  while(1)
{
cout<<"\n=====OFFICERS INFORMATION=====\n\n";
cout<<"\nChoose your choice\n";
cout<<"1) Create\n";
cout<<"2) Display\n";
cout<<"3) Jump to Main Menu\n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice)  
{
case 1 : for(count=0,i=0;i<o;i++)
{
cout<<endl;
o1[i].getofficer();
count++;
cout<<endl;
cout<<"\n\nAre you Interested in entering data\n";
cout<<"Enter y for yes and n for no:";
cin>>y_n;
if(y_n=='y' || y_n=='Y')
continue;
else goto out2;
}
out2:
break;
case 2 : for(i=0;i<count;i++)
{
cout<<endl;
o1[i].displayofficer();
cout<<endl;
}
break;
case 3 : goto start;
default: cout<<"\nInvalid choice\ntry again\n\n";
}
}
case 3 : while(1)
{
cout<<"\n=====TYPIST INFORMATION=====\n\n";
cout<<"\nChoose your choice\n";
cout<<"1) Create\n";
cout<<"2) Display\n";
cout<<"3) Jump to Main Menu\n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice)
{
case 1 : for(count=0,i=0;i<ty;i++)
{
cout<<endl;
d[i].wages();
count++;
cout<<endl;
cout<<"\n\nAre you Interested in entering data\n";
cout<<"Enter y for yes and n for no:";
cin>>y_n;
if(y_n=='y' || y_n=='Y')
continue;
else goto out3;
}
out3:
break;
case 2 : for(i=0;i<count;i++)
{
cout<<endl;
d[i].displaywages();
cout<<endl;
}
break;
case 3 : goto start;
default: cout<<"\nInvalid choice\ntry again\n\n";
}
}
case 4 : goto end;
}
}
end:
return 0;
}
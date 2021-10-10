/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

class linked_list
{
    private:
    node* head;
    node* tail;
    
    public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    
    void add_node(int n)
    {
        node* temp = new node;
        temp->data = n;
        temp->next = NULL;
        
        if(head==NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
    }
    
    void display()
    {
        node* temp;
        temp = head;
        
        while(temp!=NULL)
        {
            cout<< temp->data <<" ";
            temp = temp->next;
        }
    }
    
   
    
    void delete_end()
    {
        node* ptr;
        ptr = head;
        node* preptr;
        
        while(ptr->next != NULL)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = NULL;
       
    }
};


int main()
{
    int num;
    
    cout<<"Enter the value of number of elements in a list:";
    cin>>num;
    int x[num];
    int val;
    int prenode;
    int postnode;
    
    linked_list l1;
    for(int i=0;i<num;i++)
    {
        cout<<"Enter element:";
        cin>>x[i];
        l1.add_node(x[i]);
    }
    cout<<"\nThe list is created..\n";
    
    int choice;
    cout<<"Choose from the following....\n";
    cout<<"1. Deletion after a given node.\n";
    cin>>choice;
    
    switch(choice)
    {
        
        
        case 1:
        cout<<"Enter the element after which the deletion is to be done:";
        cin>>prenode;
      
        cout<<"\nThe new linked list after deletion is:\n";
        l1.display();
        
       
       
    }
    
    return 0;
}





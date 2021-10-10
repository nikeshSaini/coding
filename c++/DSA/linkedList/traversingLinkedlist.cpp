#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int key;
    int data;
    Node *next;
    Node(){
        key=0;
        data=0;
        next=NULL;
    }
    Node(int k,int d){
        key=k;
        data=d;
    }
};

class singlyLinkeList{
    public:
    Node *head;
    singlyLinkeList(){
        head=NULL;

    }

    singlyLinkeList(Node *n){
        head=n;
    }
    //1. check if node value exist using key value
    Node* nodeExists(int k){
        Node* temp =NULL;
        Node* ptr =head;
        while(ptr!=NULL){
            if (ptr->key==k)
            {
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
        
    }
    //apppend a  node to the list

    void appendNode(Node *n){
        if (nodeExists(n->key)!=NUll)
        {
            cout<<"Node already exists with key value:"<<n->key<<". Append another node with different key value"<<endl;
        }
        else{
            if(head==NULL){
                head =n;
                cout<<"Node appended"<< endl;
            }
            else{
                Node* ptr=head;
                while(ptr->next!=NULL){
                    ptr=ptr->next;
                }
                ptr->next=n;
                cout<<"Node appended"<<endl;
            }
        }
        
    }
};

 
int main(){
 
        
 
    return 0;
}
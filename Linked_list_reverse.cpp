#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertvalues(node* &head,int val){
    node* n=new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    
   }
void display(node* head){
    node* temp=head;
    cout<<temp->data<<"->";
    while(temp->next!=NULL){
        temp=temp->next;
        cout<<temp->data<<"->";
    }
    cout<<"NULL"<<endl;
}
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
int main(){
    node* head=NULL;
    insertvalues(head,1);
    insertvalues(head,2);
    insertvalues(head,3);
    insertvalues(head,4);
    display(head);
    node* reversehead=reverse(head);
    display(reversehead);

return 0;
}
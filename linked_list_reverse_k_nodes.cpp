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
node* reversek(node* &head,int k){
    int count=0;
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
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
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
    

return 0;
}
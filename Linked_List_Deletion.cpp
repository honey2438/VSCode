#include<iostream>
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
void insertattail(node* &head,int val){
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
void deleteathead(node* &head){
    node* tobedeleted=head;
    head=head->next;
    delete tobedeleted;
}
void todelete(node* &head,int val){
    node* temp=head;
    if(temp==NULL){
        return;
    }
    if(temp->next=NULL){
        deleteathead(temp);
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    }

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    deleteathead(head);
    display(head);

return 0;
}

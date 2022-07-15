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
void insertat(node* &head, int val){
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
    node* todelete=head;
    head=head->next;
}
void deletion(node* &head,int val ){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);
    }
    if(head->data==val){
        deleteathead(head);
        return ;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
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
    insertat(head,1);
    insertat(head,2);
    insertat(head,3);
    display(head);
    deletion(head,1);
    display(head);

return 0;
}
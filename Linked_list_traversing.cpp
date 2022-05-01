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
int traverse(node* head){
    if(head==NULL){
        cout<<"NULL";
    }
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    node* head=new node(1);
    node* second=new node(2);
    node* third=new node(3);
    head->next=second;
    second->next=third;
    third->next=NULL;
    traverse(head);

return 0;
}
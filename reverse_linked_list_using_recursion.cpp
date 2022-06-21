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
node* reverse(node* &head){
   if(head==NULL || head->next==NULL){
       return head;
   }
   node* newhead=reverse(head->next);
   head->next->next=head;
   head->next=NULL;
   return newhead;
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
    display(reverse(head));

return 0;
}
#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(node* &head, int data){

    node* temp = new node(data);

    if(head==NULL){
        head=temp;
        return;
    }
    node* h=head;
    while(h->next!=NULL){
        h=h->next;
    }
    h->next=temp;
}

void print(node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

void reverseLL(node* &head){

    node* pre=NULL;
    node* curr=head;
    node* nex;

    while(curr!=NULL){
        nex=curr->next;
        curr->next=pre;

        pre=curr;
        curr=nex;
        // nex=nex->next;
    }

    head=pre;
}

// void reverseLL(node* &head){

//     node* pre =NULL;
//     node* nex;

//     while(head->next!=NULL){
//         nex=head->next;

//         head->next=pre;
//         pre=head;
//         head=nex;
//     }
// }

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);

    print(head);

    cout<<endl;
    reverseLL(head);
    print(head);
}
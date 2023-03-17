#include<iostream>
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

void insertAtHead(node* &head,int data){
    node* temp= new node(data);

    if(head==NULL){
        head=temp;
        return;
    }

    temp->next=head;
    head=temp;
}

void insertAtTail(node* head, int data){

    node* temp = new node(data);

    if(head==NULL){
        head=temp;
        return;
    }
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=temp;
}

void deletion(node* &head,int pos){

    if(pos==1){
        node* temp =head;
        head=head->next;

        delete temp;
        return;
    }
    if(head==NULL){
        return;
    }
    int cnt=1;
    node* temp =head;
    while(temp->next!=NULL && cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    node* delnode=temp->next;
    temp->next=temp->next->next;

    delete delnode;



}

void print(node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

int main(){
    node* head =NULL;
    // node* tail =NULL;
    insertAtHead(head,15);
    insertAtHead(head,17);
    print(head);
    cout<<endl;
    insertAtTail(head,20);
    insertAtTail(head,25);
    print(head);
    cout<<endl;

    deletion(head,5);
    print(head);


}
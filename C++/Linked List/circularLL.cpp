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

void insertAtTail(node* &head,int data){
    node* temp = new node(data);
    node* h = head;

    if(head==NULL){
        head=temp;
        head->next=head;
        return;
    }

    while(h->next!=head){
        h=h->next;
    }
    h->next=temp;
    temp->next=head;
}

void insertAtHead(node* &head,int data){
    node* temp= new node(data);
    node* h= head;

     if(head==NULL){
        head=temp;
        head->next=head;
        return;
    }
    while(h->next!=head){
        h=h->next;
    }
    h->next=temp;
    temp->next=head;

    head = temp;
}
void deletionAtHead(node* &head){

    node* h= head;

    while(h->next!=head){
        h=h->next;
    }
    h->next=head->next;

    node* del =head;
    head=head->next;

    delete del;
}

void deletion(node* &head,int pos){

    if(pos==1){
        deletionAtHead(head);
        return ;
    }
    node* h=head;
    int cnt=1;

    while(cnt<pos-1){
        cnt++;
        h=h->next;
    }
    node* del=h->next;

    h->next=h->next->next;

    delete del;
}

void print(node* head){
    node* h=head;
    while(h->next!=head){
        cout<<h->data<<"->";
        h=h->next;
    }
    cout<<h->data<<"->";
    // cout<<head->data;
}

int main(){

    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);

    // print(head);
    // cout<<endl;

    insertAtHead(head,5);
    print(head);

    cout<<endl;
    deletion(head,1);
    print(head);
}
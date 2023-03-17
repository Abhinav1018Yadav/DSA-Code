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

    temp->next=head;
    head=temp;
}

void insertAtTail(node* &tail, int data){

    node* temp = new node(data);

    tail->next=temp;
    tail=temp;
}

void print(node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

int main(){
    node* temp = new node(10);
    node* head = temp;
    node* tail = temp;
    // cout<<temp->data<<" "<<temp->next<<endl;
    
    // print(head);
    // cout<<endl<<"NEW"<<endl;
    insertAtHead(head,15);
    insertAtHead(head,17);
    insertAtTail(tail,20);
    insertAtTail(tail,25);
    print(head);


}
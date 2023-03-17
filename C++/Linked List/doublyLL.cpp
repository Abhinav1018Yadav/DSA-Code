#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* pre;
    node* next;

    node(int data){
        this->data=data;
        this->pre=NULL;
        this->next=NULL;
    }
};

void insertAtTail(node* &head,int data){
    node* temp= new node(data);
    node* h=head;
    if(head==NULL){
        head=temp;
        return;
    }

    while(h->next!=NULL){
        h=h->next;
    }
    h->next=temp;
    temp->pre=h;

}

void insertAtHead(node* &head,int data){
    node* temp=new node(data);

    head->pre=temp;
    temp->next=head;
    head=temp;
}

void insertAtPosition(node* &head,int pos,int data){

    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    node* temp = new node(data);
    node* h=head;
    int cnt=1;

    while(h->next!=NULL && cnt<pos-1){
        cnt++;
        h=h->next;
    }

    if(h->next==NULL){
        insertAtTail(head,data);
        return;
    }

    temp->next=h->next;
    h->next->pre=temp;

    h->next=temp;
    temp->pre=h;

}

void deletion(node* &head,int pos){
    node* temp=head;
    int cnt=1;
    if(pos==1){
        node* del=head;
        head=head->next;
        head->pre=NULL;

        delete del;
        return;
    }

    while(temp!=NULL && cnt<pos){
        cnt++;
        temp=temp->next;
    }
    
        node* del=temp;

        temp->pre->next=temp->next;
        if(temp->next!=NULL)
            temp->next->pre=temp->pre;

        delete del;
    
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<"<->";
        head=head->next;
    }
    cout<<"NULL";


}
void printReverse(node* head){
    node* h=head;
    while(h->next!=NULL){
        h=h->next;
    }

    while(h!=NULL){
        cout<<h->data<<"<->";
        h=h->pre;
    }

    cout<<"NULL";
}

int main(){
    node* head=NULL;
    

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);

    // insertAtHead(head,0);
    // insertAtHead(head,8);
    insertAtPosition(head,5,100);
    print(head);
    cout<<endl;
    // printReverse(head);
    // cout<<endl;

    // deletion(head,4);
    // print(head);


}
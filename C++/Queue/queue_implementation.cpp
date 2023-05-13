#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int queue[100000];
    int size;
    int rear,front;

    Queue(){
        // this->size=size;
        size=0;
        rear=front=-1;
    }

    void push(int data){
        // if(rear==size-1){
        //     cout<<"Overflow";
        // }
        front = queue[0];
        queue[++rear]=data;
        size++;
    }

    void pop(){
        if(size<1){
            cout<<"Underflow";
        }
        rear--;
        size--;
    }

};
int main(){
    Queue q;

    q.push(10);
    q.push(18);
    q.push(17);

    cout<<q.size<<endl;
    cout<<q.front<<endl;
    q.pop();
    cout<<q.size<<endl;
    cout<<q.front<<endl;



}
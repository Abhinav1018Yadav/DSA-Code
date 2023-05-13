#include<iostream>
using namespace std;

class Stack{
    public:
    int * arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr = new int[size];
        top=-1;
    }

    void push(int ele){
        if(top<size-1){
        top++;
        arr[top]=ele;
        }
        else
            cout<<"Overflow"<<endl;
    }
    
    void pop(){
        if(top<=size-1){
            top--;
        }
        else
            cout<<"Underfow"<<endl;
    }

    void viewtop(){
        if(top>-1)
        cout<<arr[top]<<endl;
    }

    void isEmpty(){
        if(top==-1)
            cout<<"EMPTY"<<endl;

        else
            cout<<"NOT EMPTY"<<endl;
    }

};

int main(){
    Stack s(4);

    s.push(2);
    s.push(5);
    s.push(7);
    s.push(1);
    s.push(1);

    s.viewtop();

    s.pop();
    s.viewtop();

    s.isEmpty();

}
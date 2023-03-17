#include<iostream>
using namespace std;

int main(){

    int i = 5;
    int *p = &i;   
    //Double Pointer
    int **p1 = &p;

    cout<<i<<" "<<&i<<endl;
    cout<<*p<<" "<<p<<" "<<&p<<endl;
    cout<<p1<<" "<<*p1<<" "<<**p1<<endl;

}
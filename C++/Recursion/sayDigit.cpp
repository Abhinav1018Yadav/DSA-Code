#include<iostream>
using namespace std;
void sayDigit(int n,string digitArr[10]){
    if(n==0) return;

    int digit = n%10;

    sayDigit(n/10, digitArr);
    cout<<digitArr[digit]<<" ";
}

int main(){

    string digitArr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cin>>n;

    sayDigit(n,digitArr);
}
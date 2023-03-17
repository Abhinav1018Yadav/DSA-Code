#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){

    if(size==0)
         return false;
    if(arr[0]==key)
        return true;

    else
        return linearSearch(arr+1,size-1,key);

}

int main(){

    int arr[6]={4,10,2,1,0,8};
    int key=50;
    int size=6;
    cout<<linearSearch(arr,size,key);
}
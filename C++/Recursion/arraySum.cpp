#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
   
    if(size==0 || size==1)
        return true;

    if(arr[0]>arr[1])
        return false;
        
    return isSorted(arr+1,size-1);
}

int main(){

    int arr[5]={1,2,3,4,5};
    bool ans = isSorted(arr,5);
    cout<<"Array is "<<ans;
}
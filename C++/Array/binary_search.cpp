#include<iostream>
using namespace std;

int binarySearch(int a[],int key,int size){
    int s=0,e=size-1;

    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
            // cout<<"\nfound at"<<mid;
        }
        else if(a[mid]>key){
            e=mid-1;
            // binarySearch(a,key,s,mid-1);
        }
        else {
            s=mid+1;
            // binarySearch(a,key,mid+1,e);
        }
    }
    return -1 ;
}

int main(){

    int a[5]={1,2,3,4,5};
    int key=6;

    cout<<"Found at "<<binarySearch(a,key,5);
}
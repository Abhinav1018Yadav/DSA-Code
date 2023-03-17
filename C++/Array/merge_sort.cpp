#include<iostream>
using namespace std;

void merge(int arr[],int l, int mid, int h)
{
    int temp[h+1];
    int p1=l,p2=mid+1;
    int k=l;

    while(p1<=mid && p2<=h){
        if(arr[p1]<arr[p2]){
            temp[k]=arr[p1];
            p1++;
            k++;
        }
        else{
            temp[k]=arr[p2];
            p2++;
            k++;
        }
    }
    while(p1<=mid){
        temp[k]=arr[p1];
        p1++;
        k++;
    }
    while(p2<=h){
        temp[k]=arr[p2];
            p2++;
            k++;
    }
    for(int i=l;i<=h;i++){
        arr[i]=temp[i];
    }
}

void mergeSort(int arr[],int l,int h){
        if(l>=h) return;
   
        int mid= (l+h)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);

        merge(arr,l,mid,h);
    
}



int main(){
    int n=6;
    int arr[6]={20,10,70,50,90,40};

    mergeSort(arr,0,5);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
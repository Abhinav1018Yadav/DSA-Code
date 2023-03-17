#include<iostream>
#include<vector>
using namespace std;

void merge(int a[],int b[]){
    int i=0,j=0;
    int m=4,n=5;
    vector<int> c;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(b[j]);
            j++;
        }
    }
    while(i<m){
        c.push_back(a[i]);
        i++;
    }
    while(j<n){
        c.push_back(b[j]);
        j++;
    }
    
    for(auto i:c){
        cout<<i<<" ";
    }
}

int main(){

    int a[4]={1,3,5,8};
    int b[5]={2,4,6,11,20};

    merge(a,b);
}
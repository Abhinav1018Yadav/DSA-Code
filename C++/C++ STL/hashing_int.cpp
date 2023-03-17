#include<bits/stdc++.h>
using namespace std;

int main(){
    int num[5];
    for(int i=0;i<5;i++)
        cin>>num[i];

    int hash[20]={0};

    for(int i=0;i<5;i++){
        hash[num[i]]++;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        cout<<hash[n]<<endl;

    }
}
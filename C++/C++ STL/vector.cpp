#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main(){

    vector <int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    
    for(auto element:v){
        cout<<element<<endl;
    }

    vector <int> v2(2,50);

    swap(v,v2);

    for(auto element:v){
        cout<<element<<" ";
    }
    for(auto i:v2){
        cout<<i<<" ";
    }

}
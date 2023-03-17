#include<iostream>
#include<map>

using namespace std;
int main(){

    map<int,string> m;
    m[1]="Abhinav";
    m[2]="Yadav";
    m[7]="Abhi";
    m[10]="Yaduvanshi";

    for(auto i:m){

        cout<<i.first<<" " <<i.second<<endl;

    }
    map <int>iterator:: itr=m.find(10);
    cout<<itr;
    
}
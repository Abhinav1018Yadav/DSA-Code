#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    // a.erase(a.begin(),a.begin()+1);
    a.clear();
    cout<<a.size()<<" "<<a.capacity()<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
}
#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int> u;
    u.insert(4);
    u.insert(10);
    u.insert(12);
    u.insert(4);
    u.insert(4);

    u.clear();

    for(auto i:u){
        cout<<i<<" ";
    }
    cout<<u.size();
}
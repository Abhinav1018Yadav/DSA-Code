#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        set<int> s;
        for(int i=0;i<n;i++)
            s.insert(arr1[i]);
            
        for(int i=0;i<m;i++)
            s.insert(arr2[i]);
            
        for(auto i:s)
            ans.push_back(i);

        return ans;
    }

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[6]={2,2,4,6,7};

    vector<int> ans;
    ans=findUnion(arr1,arr2,5,6);
    cout<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";


}
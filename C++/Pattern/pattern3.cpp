#include<iostream>

using namespace std;

int main()
{   //upperhalf
    for(int i=1;i<=5;i++){
        for (int j = 5; j>=i; j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }

    //lowerhalf
    for(int i1=5;i1>=1;i1--){
        for (int j1 = 1; j1<=6-i1; j1++)
        {
            cout<<" ";
        }
        for(int k1=2*i1-1;k1>=1;k1--){
            cout<<"*";
        }
        cout<<"\n";
    }

}
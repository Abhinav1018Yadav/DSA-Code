#include<iostream>
#include<algorithm>

using namespace std;
int main(){

    int a[5]={1,2,4,7,10};

    cout<<*(upper_bound(a,a+5,6))<<endl;
}
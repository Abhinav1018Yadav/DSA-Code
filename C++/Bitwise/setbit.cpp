
#include <iostream>

using namespace std;

int setbit(int n){
    int count=0;
    while(n!=0){
    int bit=n&1;
    
    if(bit){
        count++;
    }
    n=n>>1;    
    }
    
    return count;
}

int main()
{
    // int a=2,b=3;
    
    cout<<setbit(0)+setbit(15);

    return 0;
}


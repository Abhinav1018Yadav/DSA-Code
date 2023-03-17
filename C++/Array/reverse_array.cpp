#include <iostream>
using namespace std;

int main() {
	//code
	int t,temp,n,i;
	int a[100];
	// cin>>t;
	// while(t--){
	    cin>>n;
	   
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
        // cout<<a[0]<<endl;
	    for(i=0;i<(n/2);i++){
	        temp=a[i];
	        a[i]=a[n-i-1];
	        a[n-i-1]=temp;
	    }
	    for(i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	// }
	
	return 0;
}
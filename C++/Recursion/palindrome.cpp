#include<iostream>
using namespace std;

int palindrome(string S,int i,int j){
        
        if(i>j) return 1;
        
        if(S[i]!=S[j])  return 0;
        
        return palindrome(S,i+1,j-1);
    }

int main(){

    string str="abbad";
    cout<<palindrome(str,0,str.length()-1);

}
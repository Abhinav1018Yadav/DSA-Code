#include<iostream>
using namespace std;

bool Palindrome(string str){
        int s=0,e=str.length()-1;

        while(s<=e){
        if(str[s]!=str[e])  return false;
        s++;e--;
        }
      
        return true;

    }

bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            {
                str.push_back(tolower(s[i]));
            }
        }
        cout<<str<<endl;
        return Palindrome(str);
    }

int main(){

    string s;
    cin>>s;
    // cout<<s<<endl;
    cout<<isPalindrome(s);
    
}
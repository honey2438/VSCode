#include<iostream>
using namespace std;
bool palindrome(string s,int i){
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return palindrome(s,i+1);
}
int main(){
    string s;
    cout<<"Enter the string";
    cin>>s;
bool check=palindrome(s,0);
if(check==1){
    cout<<"The string is palindrome";
}
else{
    cout<<"The string is not palindrome";
}
return 0;
}
// O(N/2)
// O(N/2)
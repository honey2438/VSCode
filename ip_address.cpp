#include<iostream>
using namespace std;
int main(){
    string k,s;
    int t,i;
    cout<<"Enter the string";
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]!='.'){
            k=k+s[i];

        } 
        else if(s[i]=='.'){
            t=stoi(k);
            if(t<0 || t>255){
                cout<<"invalid";           
                break; 
                }
            
            t=0;
            k="";
        }   


    }
    if(i == s.length()-1){
        cout<<"valid";
    }

}
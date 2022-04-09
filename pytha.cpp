#include<iostream>
#include<cmath>
using namespace std;
bool ispytha(int a, int b, int c){
    if(a>b && a>c){
        if(pow(a,2)==pow(b,2)+pow(c,2)){
            return true;
        }
    }
    else if(b>a && b>c){
       if(pow(b,2)==pow(a,2)+pow(c,2)){
            return true;
       }
    }
    else{
        if(pow(c,2)==pow(a,2)+pow(b,2)){
            return true;
        }
    }
    return false;
}
int main(){
    int i,j,k;
    cout<<"Enter 3 numbers";
    cin>>i>>j>>k;
    if(ispytha(i,j,k)){
        cout<<"It is a pythagarous triplet";
    }
    else{
        cout<<"it is not a pythagarous triplet";
    }
    return 0;
}
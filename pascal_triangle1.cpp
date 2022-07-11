#include<iostream>
#include<vector>
using namespace std;
int fact(int n){
int factorial;
    if(n==0){
        n=1;
    }
    factorial=fact(n)*fact(n-1);
    return factorial;
}

void printPascal(int n) 
{
    vector<vector<int>> vect;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            vect[i][j]=fact(i)/(fact(i-j)*fact(j));
        }
    }
     for(int i=0;i<vect.size();i++){
        for(int j=0;j<=i;j++){
            cout<<vect[i][j];
        }
        cout<<endl;
     }
}
 int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    printPascal(n);

 }

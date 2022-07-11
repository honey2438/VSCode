#include <bits/stdc++.h> 
int fact(int n){
int factorial=1;
    if(n>0){
        factorial=fact(n)*fact(n-1);
    }
    return factorial;
}

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> vect;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            vect[i][j]=fact(i)/(fact(i-j)*fact(j));
        }
    }
    return vect;
}

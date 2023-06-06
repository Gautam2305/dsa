#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

// TC - O(N);
// SC - O(N);

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}
#include <bits/stdc++.h>
using namespace std;


int printSum(int n){
    if(n==0){
        return n;
    }
    return n + printSum(n-1);
}
// TC - O(N);
// SC - O(N);
int main(){
    int n;
    cin>>n;
    cout<<printSum(n);
}
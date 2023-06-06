#include <bits/stdc++.h>
using namespace std;


void printLinear(int i, int n){
    if(i<1) return;
    printLinear(i-1,n);
    cout<<i<<endl;
}
void printReverse(int i,int n){
    if(i>n) return;
    printReverse(i+1,n);
    cout<<i<<endl;
}

int main(){
    int i,n;
    cin>>i>>n;
    printReverse(i,n);
}
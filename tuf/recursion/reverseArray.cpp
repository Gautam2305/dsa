#include <bits/stdc++.h>
using namespace std;

void reverseArray(int a[],int l, int r){
    while(l<=r){
        swap(a[l],a[r]);
        reverseArray(a,l+1,r-1);
    }
    return;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverseArray(a,0,n-1);
}
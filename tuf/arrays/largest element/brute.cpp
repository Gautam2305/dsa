#include <bits/stdc++.h>
using namespace std;

// TC - O(NlogN)
// SC - O(1)

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    sort(array,array+n);
    cout<<array[n-1];
}
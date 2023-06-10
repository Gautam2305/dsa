#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int largest = arr[n-1],second=-1;
    // forgot that last two elements can be same
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            second = arr[i];
            break;
        }
    }
    cout<<second;
}
#include <bits/stdc++.h>
using namespace std;

//time complexity - O(2N)

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest = arr[0];
    int secondLargest=-1;
    
    sort(arr,arr+n);
    largest=arr[n-1];

    for(int i=0;i<n;i++){
        if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest = arr[i];
        }
    }
    cout<<secondLargest;
}
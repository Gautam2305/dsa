#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest= arr[0];
    int secondLargest = -1;
// Time complexity = O(N)
    for(int i=1;i<n;i++){
        if(arr[i]>largest && arr[i]!=secondLargest){
            secondLargest=largest;
            largest = arr[i];

        }else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }
    cout<<secondLargest;
}
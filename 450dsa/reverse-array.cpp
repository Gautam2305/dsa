#include <bits/stdc++.h>
using namespace std;
//reverse the arr after Mth element 
int main(){
        int t;
        cin>>t;
        while(t--){
        int size,m;
        cin>>size>>m;
        int arr[size];
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
        int start=m+1;
        int end=size-1;

        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }

        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        }
    }       
}
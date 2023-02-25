#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
           min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
          max=arr[i];
        }
    }
    cout<<"the minimum element in array is:"<<min<<endl;
    cout<<"the maximum element in array is:"<<max<<endl;
}
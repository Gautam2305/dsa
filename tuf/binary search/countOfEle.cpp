#include <bits/stdc++.h>
using namespace std;
int first=-1;
int second = -1;
int firstOccurence(vector<int> v, int start,int end,int x){
    while(start<=end){
        int mid = start+(end-start)/2;
        if(v[mid]==x){
            first=mid;
            end=mid-1;
        }else if(x<v[mid]){
            end=mid-1;
        }else start=mid+1;
    }
    return first;
}
int lastOccurence(vector<int> v, int start,int end,int x){
    while(start<=end){
        int mid = start+(end-start)/2;
        if(v[mid]==x){
            second=mid;
            start=mid+1;
        }else if(x<v[mid]){
            end=mid-1;
        }else start=mid+1;
    }
    return second;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x;
    cin>>x;
    int firstOcc = firstOccurence(v,0,n-1,x);
    int lastOcc = lastOccurence(v,0,n-1,x);

    cout<<lastOcc-firstOcc+1;

}
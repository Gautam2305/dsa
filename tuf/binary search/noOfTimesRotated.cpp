#include <bits/stdc++.h>
using namespace std;

int noOfTimesRotated(vector<int> &v,int start,int end){
    while(start<=end){
    int mid= start+(end-start)/2;
    int next = (mid+1)%v.size();
    int prev = (mid+v.size() -1)%v.size();
    if(v[mid]<=v[next] && v[mid]<=v[prev]){
        return mid;
    }
    else if(v[start]<=v[mid]){
        start=mid+1;
    }
    else if(v[mid]<=v[end]){
        end=mid-1;
    }
    }
    return -1;
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
    int res = noOfTimesRotated(v,0,n-1);
    cout<<res;
}
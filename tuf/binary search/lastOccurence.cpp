#include <bits/stdc++.h>
using namespace std;

int res=-1;

int lastOccurence(vector<int> v, int start, int end, int num){
    while(start<=end){
        int mid= start+(end-start)/2;
        if(v[mid]==num){
            res=mid;
            start=mid+1;
        }else if(v[mid]<num){
            start=mid+1;
        }else end=mid-1;
    }
    return res;
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

    int num;
    cin>>num;
    int ans = lastOccurence(v,0,n-1,num);
    cout<<ans;

}
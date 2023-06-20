#include  <bits/stdc++.h>
using namespace std;
int res = -1;
int firstOccurence(vector<int> v, int l,int r,int num){
    while(l<=r){
        int mid = l + (r-l)/2;
    if(v[mid]==num){
        res = mid;
        r=mid-1;
    }else if(v[mid]>num){
        r=mid-1;
    }else{
        l=mid+1;
    }
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

    int ans = firstOccurence(v,0,n-1,num);

    cout<<ans;
}
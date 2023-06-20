#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> res;
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(v[j]>=v[i]){
                res.push_back(v[j]);
            }
        }
        res.push_back(-1);
    }
    reverse(res.begin(),res.end());
    for(auto it : res){
        cout<<it<<" ";
    }
}
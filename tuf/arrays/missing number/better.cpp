#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> hash(n+1,0);
    for(int i=0;i<n;i++){
        hash[v[i]]=1;
    }
    for(int i=1;i<n;i++){
        if(hash[i]==0){
            cout<<i;
        }
    }
    return 0;
}
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

    vector<int> temp0;
    vector<int> temp1;

    for(int i=0;i<n;i++){
        if(v[i]==0){
            temp0.push_back(v[i]);
        }else temp1.push_back(v[i]);
    }
    temp1.insert(temp1.end(),temp0.begin(),temp0.end());
    for( auto it: temp1){
        cout<<it<<" ";
    }
}
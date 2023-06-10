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

    int temp = v[0];
    for(int i=1;i<n;i++){
        v[i-1]=v[i];
    }
    temp=v[n-1];
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
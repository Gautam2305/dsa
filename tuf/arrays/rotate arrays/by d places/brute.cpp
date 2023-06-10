#include<bits/stdc++.h>
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

    int d;
    cin>>d;
    d=d%n;

    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(v[i]);
    }    
    vector<int> temp2;
    for(int i=d;i<n;i++){
        v[i-d]=v[i];
        temp2.push_back(v[i-d]);
    }
    temp2.insert(temp2.end(),temp.begin(),temp.end());
    for(auto it: temp2){
        cout<<it<<" ";
    }
}
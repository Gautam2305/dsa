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

    int j=-1;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            j==i;
            break;
        }
    }
    
    for(int i=j+1;i<n;i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
        }
    }
    
    for(auto &it: v){
        cout<<it<<" ";
    }
}
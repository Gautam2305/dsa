#include <bits/stdc++.h>
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
   
    for(int i=1;i<=n;i++){
        int flag=0;
    for(int j=0;j<n;j++){
        if(v[j]==i){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<i;
    }
    }

}
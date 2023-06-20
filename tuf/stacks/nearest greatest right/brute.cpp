#include <bits/stdc++.h>
using namespace std;
//next largest element


int main(){
     int n;
     cin>>n;
     vector<int> v;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
     }

    int i=0, j=1;
    vector<int> temp;
    while(i<n && j<n){
        if(v[i]>=v[j]){
            j++;
        }else if(v[i]<v[j]){
            temp.push_back(v[j]);
            i++;
            j=i+1;
        }
        temp[n-1] = -1;
    }
    for(auto it: temp){
        cout<<it<<" ";
    }
}
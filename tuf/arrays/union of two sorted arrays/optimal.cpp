#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> v1,v2;
    for (int i=0;i<n1;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for (int i=0;i<n2;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    } 
    vector<int> unioN;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(v1[i]<=v2[j]){
            if(unioN.size() == 0 || unioN.back() != v1[i]){
                unioN.push_back(v1[i]);
            }
            i++;
        }else{
            if(unioN.size() == 0 || unioN.back() != v2[j]){
                unioN.push_back(v2[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(unioN.size() == 0 || unioN.back() != v2[j]){
                unioN.push_back(v2[j]);
            }
        j++;
    }
    while(i<n1){
        if(unioN.size() == 0 || unioN.back() != v1[i]){
                unioN.push_back(v1[i]);
            }
            i++;
    }
    for(auto it: unioN){
        cout<<it<<" ";
    }
}
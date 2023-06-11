#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> v1,v2;
    vector<int> visited(n2,0);
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
    vector<int> intersect;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(v1[i]<v2[j]){
        i++;
    }
    if(v1[i]==v2[j] && visited[j]==0){
        intersect.push_back(v1[i]);
        visited[j]=1;
        i++;
        j++;
    }
    }

    for(auto it: intersect){
        cout<<it<<" ";
    }
}


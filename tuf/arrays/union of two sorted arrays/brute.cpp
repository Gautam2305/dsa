#include <bits/stdc++.h>
using namespace std;
/*
1 1 2 3 4 5
2 3 4 4 5 6
*/
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
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(v1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(v2[i]);
    }
    for(auto it: st){
        cout<<it<<" ";
    }
}
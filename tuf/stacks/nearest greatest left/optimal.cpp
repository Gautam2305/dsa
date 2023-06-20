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
    stack<int> st;
    vector<int> res;
    for(int i=0;i<n;i++){
        if(st.empty()){
            res.push_back(-1);
        }else if(!st.empty() && st.top()>v[i]){
            res.push_back(st.top());
        }else if(!st.empty() && st.top()<=v[i]){
            while(!st.empty() && st.top()<=v[i]){
                st.pop();
            }
            if(st.empty()){
                res.push_back(-1);
            }else{
                res.push_back(st.top());
            }
        }
        st.push(v[i]);
    }
    for(auto it: res){
        cout<<it<<" ";
    }
}



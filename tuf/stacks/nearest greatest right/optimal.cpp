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
    
    for(int i=n-1;i>=0;i--){
        if(st.size()==0){
            res.push_back(-1);
        }else if(st.size()>0 && st.top()>v[i]){
            res.push_back(st.top());
        }else if(st.size()>0 && st.top()<=v[i]){
            while(st.size()>0 && st.top()<=v[i]){
                st.pop();
            }
            if(st.size()==0){
                res.push_back(-1);
            }else{
                res.push_back(st.top());
            }
        }
        st.push(v[i]);
    }
    reverse(res.begin(),res.end());

    for(auto it: res){
        cout<<it<<" ";
    }
}
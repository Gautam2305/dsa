#include <bits/stdc++.h>
using namespace std;

void subseq(int idx, vector<int> v,vector<int> a,int n){
    if(idx >= n){
        for(auto it : v){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    v.push_back(a[idx]);
    subseq(idx+1,v,a,n);

    v.pop_back();
    subseq(idx+1,v,a,n);
}
//time complexity - O(N*(2^N))
//space complexity - O(N)

int main(){
    vector<int> v,a={3,1,2};
    int n=a.size();
    subseq(0,v,a,n);
}
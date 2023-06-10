#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v, int start,int end){
    while(start<end){
        int temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;
    }
}
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
    reverse(v,0,d-1);
    reverse(v,d,n-1);
    reverse(v,0,n-1);
    for(auto it: v){
        cout<<it<<" ";
    }

}
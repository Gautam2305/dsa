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

    int maximum=0;
    int counter=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            counter++;
            maximum=max(maximum,counter);
        }else{
            counter=0;
        }
    }
    cout<<maximum;
}
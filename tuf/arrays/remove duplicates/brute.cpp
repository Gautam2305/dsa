#include<bits/stdc++.h>
using namespace std;
// TC - O(nlogn + n)
// SC - O(n)

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st){
        arr[index] = it;
        index++;
    }
    for(int i=0;i<index;i++){
        cout<<arr[i];
    }
}
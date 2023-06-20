#include <bits/stdc++.h>
using namespace std;

int top = -1;
int push(vector<int> &v, int x){
    return v[++top] = x;
}
int pop(){
    return top--;
}
bool isEmpty(){
    if(top == -1){
        return true;
    }else false;
}
int isTop(vector<int> &v){
    return v[top];
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    push(v,2);
    push(v,3);
    push(v,4);
    cout<<isTop(v)<<endl;
    pop();
    pop();
    cout<<isEmpty();
}
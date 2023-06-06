#include <bits/stdc++.h>
using namespace std;

// brute force - take a global variable and increment it everytime 


//without using global variables
void printName(int n,int i){
    if(i<=n){
        cout<<"gautam"<<endl;
        printName(n,i+1);
    }else{
        return;
    }
    
}

// Time Complexity - O(N)
// Space complexity  - O(N)

int main(){
    int n,i;
    cin>>n>>i;

    printName(n,i);
}
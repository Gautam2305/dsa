#include <bits/stdc++.h>
using namespace std;

void printSum(int num, int sum){
    if(num<1){
        cout<<"Sum: "<<sum;
        return;
    }
    printSum(num-1,sum+num);
}
// TC - O(N);
// SC - O(N);
int main(){
    int n;
    cin>>n;
    printSum(n,0);
}
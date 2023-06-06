#include <bits/stdc++.h>
using namespace std;


void printLinearly(int number, int startPoint){
    if(startPoint>number) return;
    cout<<startPoint<<endl;
    printLinearly(number, startPoint +1);
}
void printLinearReverse(int number, int startPoint){
    if(startPoint<1) return;
    cout<<startPoint<<endl;
    printLinearReverse(number, startPoint-1);
}

//Time complexity - O(N)
//Space complexity - O(N)

int main(){
    int number,startPoint;
    cin>>number>>startPoint;

    // printLinearly(number,startPoint);
    printLinearReverse(number, startPoint);
}
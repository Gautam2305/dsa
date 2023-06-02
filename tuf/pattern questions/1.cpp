// nested loops - mostly two loops

/* RULES : 
- for the outer loops , count the number of lines
- for the inner loop, focus on the columns and connect them somehow to the rows
- print always inside the inner for loop
- observe symmetry [optional]  */
/*
output: 
    ****
    ****
    ****
    ****

*/
#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int print6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void print7(int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
            
        }
        for(int j=0;j<(2*i)+1;j++){
                cout<<"*";
            }
        for(int j=0;j<n-i;j++){
            cout<<" ";
            
        }
        cout<<endl;
    }
}
void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*(n-i))-1;j++){
            cout<<"*";
        }
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print9(int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
            
        }
        for(int j=0;j<(2*i)+1;j++){
                cout<<"*";
            }
        for(int j=0;j<n-i;j++){
            cout<<" ";
            
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*(n-i))-1;j++){
            cout<<"*";
        }
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print10(int n){
    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<n+1;j++){
            cout<<"*";
        }
        cout<<endl;
        for(int j=n+1;j<(2*n)-i+1;i++){
            cout<<"*";
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cin>>n;
    print10(n);
}
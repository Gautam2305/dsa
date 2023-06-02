#include <bits/stdc++.h>
using namespace std;

void dosomething(int &num){
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

int main(){
    // int x,y;
    // long x1;
    // cout<<"hey gautam"<<endl;
    // cout<<"helu again"<<endl;
    // long long x2= 15000000;
    // cout<< x2;
    // string s;
    // cin >> s;
    // cout<<s;
    // string s2;
    // getline(cin,s2);
    // cin>>s2;
    // cout<<s2;
    // remember approx values of int, long long, long

    // int age;
    // cin>> age;
    // //****not mandatory to have an else statement********8
    // if(age>=18){
    //     cout<<"yes";
    // }else{
    //     cout<<"no";
    // }
    // return 0;


    // int marks;
    // cin>>marks;
    // if(marks<25){
    //     cout<<"f";
    // }else if(marks<=44){
    //     cout<<"e";
    // }else if(marks<=49){
    //     cout<<'d';
    // }else if(marks<=59){
    //     cout<<"c";
    // }else if(marks<=79){
    //     cout<<"b";
    // }else if(marks<=100){
    //     cout<<"a";
    // }

    // int age;
    // cin>>age;
    // if(age<18){
    //     cout<<"not eligible for job";
    // }else if(age>=55 && age<=57){
    //     cout<<"retirement soon";
    // }else if(age >57){
    //     cout<<"retirement time";
    // }else{
    //     cout<<"eligible for job";
    // }

    // int day;
    // cin>>day;
    // switch(day){
    //     case 1:
    //         cout<<"Monday";
    //         break;
    //     case 2:
    //         cout<<"Tuesday";
    //         break;
    //     case 3:
    //         cout<<"Wednesday";
    //         break;
    //     case 4:
    //         cout<<"Thursday";
    //         break;
    //     case 5:
    //         cout<<"Friday";
    //         break;
    //     case 6:
    //         cout<<"Saturday";
    //         break;
    //     case 7:
    //         cout<<"Sunday";
    //         break;
    //     default: 
    //         cout<<"default";
    // }

    //*********Arrays*********//

    // int arr[5];
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    // }
    //********2d arrays**********//
    // int arr[2][5]; 

    //*******strings**********//
    // string s = "gautam";
    // // every character is stored in an index
    // int len = s.size();
    // s[len-1] = 'h';
    // cout<<s;

    //***********for, while and do-while  loops*************//
    //for loop is just a code refactor of while loop

    //functions- pass by ref and pass by value

    int num =10;
    dosomething(num);
    cout<<num<<endl;
    //arrays, set, maps,etc all are passed by reference
    return 0;
}
#include<iostream>
using namespace std;

string Dectobinary(int n){

    if(n==0){
        return "0";
    }

    string str="";

    while(n>0){
        str=to_string(n%2)+str;
        n/=2;
    }
    return str;
}

int main(){
    int n;
    cin>>n;

    cout<<Dectobinary(n);
    return 0;
}
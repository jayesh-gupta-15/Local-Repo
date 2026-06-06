#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;

int add( int a , int b){
    return a+b;
}

int main(){
    int a, b;

    cin>>a,b;

    cout<<add(a,b)<<endl;

    return 0;
}
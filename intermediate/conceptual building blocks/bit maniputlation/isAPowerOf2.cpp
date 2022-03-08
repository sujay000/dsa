#include<bits/stdc++.h>
using namespace std;

// Is A Power Of 2

int main(){
    int n;
    cin>>n;
    if( (n&(n-1)) == 0 ){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
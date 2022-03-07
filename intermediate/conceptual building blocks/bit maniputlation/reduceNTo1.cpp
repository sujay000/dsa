#include<bits/stdc++.h>
using namespace std;

// Reduce N To 1

int solution(long n){
    int res = 0;

    while( n != 1){
        if( n%2 == 0){
            n = n/2 ;
        }
        else if( n == 3 ){
            n = n - 1;
        }
        else if( n%4 == 1){
            n = n - 1;
        }
        else if( n%4 == 3){
            n = n + 1;
        }
        res++;
    }

    return res;
}


int main(){
    int n;
    cin>>n;
    
    cout<<solution(n)<<endl;
    
}
#include<bits/stdc++.h>
using namespace std;

// Kernighans Algorithm

int main()
{
    int n;
    cin>>n;
    
    int count = 0;

    // while(n>0){
    //     n = n&(n-1);
    //     count++;
    // } 
    // or

    while(n>0){
        int rsb = n&-n;
        n = n - rsb;
        count++;
    }

    cout<<count;


    return 0;
}
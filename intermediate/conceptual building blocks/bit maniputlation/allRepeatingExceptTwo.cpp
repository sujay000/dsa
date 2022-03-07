#include<bits/stdc++.h>
using namespace std;

void solution(vector<int>&arr){

    int res = 0;
    for(int x : arr){
        res = res ^ x ;
    }

    int res1 = 0;
    int res2 = 0;

    int diffBit = ( res & ~(res - 1) );

    for(int x : arr){
        if((x & diffBit) == 0  ){
            res1 = res1 ^ x ;
        }
        else{
            res2 = res2 ^ x ;
        }
    }
    // cout<<res1<<endl;
    // cout<<res2<<endl;
    //  first print min of both and then the other one for compiler evaluation
    cout<<min(res1,res2)<<endl;
    cout<<max(res1,res2)<<endl;


    
}
int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    solution(arr);
}
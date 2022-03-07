#include<bits/stdc++.h>
using namespace std;
// One Repeating And One Missing

void solution(vector<int>&arr){

    int res = 0;
    for(int i =0; i<arr.size(); i++){
        res = res ^ arr[i] ^ (i+1) ;
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
    for(int i = 1; i<=arr.size(); i++){
        if((i & diffBit) == 0  ){
            res1 = res1 ^ i ;
        }
        else{
            res2 = res2 ^ i ;
        }
    }

    int repNum;
    for(int x : arr){
        if(res1 == x){
            repNum = res1;
        }
        else if(res2 == x){
            repNum = res2;
        }
    }

    int misNum = res^repNum;

    
    cout<<"Missing Number -> "<<misNum<<endl;
    cout<<"Repeating Number -> "<<repNum<<endl;


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
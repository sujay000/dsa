#include<bits/stdc++.h>
using namespace std;

// Sum Of Bit Differences Of All Pairs

long solution(vector<int>&arr){
  long long count = 0;

    for(int j = 0; j<32; j++){
        long long set = 0;
        long long unset = 0;

        for(int x : arr){
            if( (x & (1LL<<j)) == 0 ){
                unset++;
            }
            else{
                set++;
            }

        }

        count += (2 * set * unset) ;

    }
    return count;

}
int main (){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i = 0 ; i <n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<solution(arr)<<endl;
}

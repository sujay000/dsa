#include<bits/stdc++.h>
using namespace std;

// Min Xor Pairs

void solution(vector<int>& arr){
  
    sort(arr.begin() , arr.end());
    int minxor = INT_MAX;
    for(int i = 1; i<arr.size() ; i++){
      minxor = min(minxor, (arr[i]^arr[i-1]));
    }

    
    for(int i = 1; i<arr.size(); i++){
      if((arr[i]^arr[i-1]) == minxor){
        cout<<arr[i-1]<<", "<<arr[i]<<endl;
      }
    }

    

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
#include <bits/stdc++.h>
using namespace std;

// Triplets - 1

void solution(vector<int> &arr){

    int count = 0;
    for(int i =0; i<arr.size(); i++){
        int xorval = arr[i];
        for(int k = i+1; k<arr.size(); k++){
            xorval = xorval ^ arr[k] ;
            if(xorval == 0){
                count += (k-i);
            }
        }
    }


    cout<<count;   
}

int main() {
	int n = 0;
	cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < arr.size(); i++){
        cin>>arr[i];
    }
    solution(arr);
    return 0;
}
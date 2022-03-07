#include<bits/stdc++.h>
using namespace std;

// Utf - 8 Encoding

    bool solution(vector<int>& arr) {
        int rbytes = 0;
        for(int val : arr){
            
            if(rbytes == 0){
                if( (val >> 7) == 0b0 ){
                    rbytes = 0;
                }
                else if( (val>>5) == 0b110 ){
                    rbytes = 1;
                }
                else if( (val>>4) == 0b1110 ){
                    rbytes = 2;
                }
                else if( (val>>3) == 0b11110 ){
                    rbytes = 3;
                }
                else{
                    return false;
                }
            }
            else{
                if( (val >> 6) == 0b10 ){
                    rbytes--;
                }
                else{
                    return false;
                }
            }



        }


        if(rbytes == 0){
            return true;
        }
        return false;
    }

    

    int main() {
        
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        bool f = solution(arr);
        if(f){
            cout<<"true";
        }else{
            cout<<"false";
        }
    }
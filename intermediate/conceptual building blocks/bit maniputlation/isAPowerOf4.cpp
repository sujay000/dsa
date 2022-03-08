#include<bits/stdc++.h>
using namespace std;

// Is A Power Of 4

bool isPowerOfFour(int n){
    if( n == 0){
        return false;
    }
    int powerOfTwo = log2(n);
    if((n & (n-1) )  != 0){
    	return false;
    }
    if((powerOfTwo % 2) == 0){
        return true;
    }
    else{ 
        return false;
    }
}

bool isPowerOfFour2(int n){

    if( n == 0){
        return false;
    }

    if( (n&(n-1) ) != 0 ){
        return false;
    }

    if( (n&(0xaaaaaaaa))  == 0 ){  //bit must be present even place
        return true;
    }


    return false;
}

int main(){
    int n;
    cin>>n;
    if(isPowerOfFour2(n))
    cout<<"true";
    else cout<<"false";
    cout<<endl;
    
}
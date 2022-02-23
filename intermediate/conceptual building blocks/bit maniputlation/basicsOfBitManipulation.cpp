#include<bits/stdc++.h>
using namespace std;

// Basics Of Bit Manipulation

int main(){
    int n,i,j,k,m;
    cin>>n>>i>>j>>k>>m;
    cout<< (n|1<<(i))  <<endl;

    cout<< (n& ~(1<<(j))) <<endl;

    cout<< (n^ 1<<(k))  << endl;
    
    if( (n&(1<<m)) == 0  )
        cout<<"false";
    else
        cout<<"true";


}
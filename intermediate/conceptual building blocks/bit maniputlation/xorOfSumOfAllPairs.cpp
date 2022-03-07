#include<bits/stdc++.h>
using namespace std;

// Xor Of Sum Of All Pairs

int solution(vector<int> &v1)
{   int res = 0;
    for(int x : v1){
        res =( res ^ (x + x ) ) ; 
    }

    return res;
}

int main()
{
    int n;cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;++i) cin>>v1[i];
    cout<<solution(v1)<<"\n";
    return 0;
}
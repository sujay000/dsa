#include<bits/stdc++.h>
using namespace std;

//Pepcoder and bits

long ncr(long n, long r){
        if(n < r){
            return 0L;    
        }
        
        long res = 1L;
        
        for(long i = 0L; i < r; i++){
            res = res * (n - i);
            res = res / (i + 1);
        }
        
        return res;
    }

long csb(long n){
        long res = 0;
        
        while(n > 0){
            long rsb = n & -n;
            n -= rsb;
            res++;
        }
        
        return res;
    }

long  solution(long n,long k,long i)
{   
    if( i == 0)
        return 0;

    long res = 0;

    if( (n&(1L<<i)) == 0 ){
        res = solution(n, k, i-1);
    }
    else{
        long c1 = solution(n , k-1 , i-1 );
        long c2 = ncr(i, k);
        res = c1 + c2;
    }

    return res;


}

int main()
{
    long n;cin>>n;
    
    long k=csb(n);
    long ans=solution(n,k,63);
    cout<<ans<<"\n";
    return 0;
    
}
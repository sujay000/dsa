#include<bits/stdc++.h>
using namespace std;

// Print Value Of Rsb Mask

void decToBinary(int n)
{
  string s;
	while(n>0){
		{if(n%2 == 0)
			s += '0';
		else
			s += '1';}
			
		n = n/2;
	}
	reverse(s.begin(), s.end());
	cout<<s<<endl;
}


int main(){
    
    
    int n;
    cin>>n;
   
    // int k=(n&((~n)+1)) or
    int k = (n & -n);
    decToBinary(k);
    
}
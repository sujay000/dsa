#include <bits/stdc++.h>
using namespace std;

// Count Encodings
// also be careful with brackets in this problem 
// especially the ternary operator
int fun(string s){
	int n = s.size();

	// four cases which decide 
	
	// 0			0
	// 0			non-zero
	// non-zero		0
	// non-zero		non-zero

	vector<int> dp(n);
	
	dp[0] = 1;
	
	for(int i =1; i<n; i++){
		if(s[i-1] == '0' && s[i] == '0'){
			dp[i] = 0;
		}
		else if( s[i-1] == '0' && s[i] != '0'){
			dp[i] = dp[i-1];
		}
		else if( s[i-1] != '0' && s[i] == '0'){
			if(s[i-1] == '1' || s[i-1] == '2'){
				dp[i] = (i-2>0 ? dp[i-2] : 1); 
			}
		}
		else {
			string lastTwo = s.substr(i-1,2);
			int valLastTwo = stoi(lastTwo);
			if(valLastTwo <= 26){
				dp[i] = dp[i-1] +( i-2>0 ? dp[i-2] : 1);
			}
			else{
				dp[i] = dp[i-1];
			}
		}
	}
	
	return dp[n-1];
}



void solve()
{	
	string s;
	cin>>s;
	int res =fun(s);
	cout<<res;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

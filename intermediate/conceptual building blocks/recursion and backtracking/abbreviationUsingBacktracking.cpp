#include <bits/stdc++.h>
using namespace std;

// Abbreviation Using Backtracking

void fun(string ip, string op, int count){
	if(ip.size() == 0){
		cout<<op<<((count>0)?to_string(count) : "")<<endl;
		return;
	}
	
	char c = ip[0];
	
	string op1 = op;
	string op2 = op;
	ip.erase(ip.begin());
	
	op1 += "" ;
	op2 += ((count>0)?to_string(count) : "") + c;
	
	fun(ip, op2, 0);
	fun(ip, op1, count+1);
	
	
}

void solve()
{	
	string s;
	cin>>s;
	fun(s, "" , 0) ;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

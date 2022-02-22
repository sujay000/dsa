#include <bits/stdc++.h>
using namespace std;

// Permutations - 2

//	cb -> current box
//	tb -> total boxes
//	ssf-> selections so far
//	ts -> total selections
//  asf -> answer so far
// 	itemsvisited -> keeps track of items using indexes used so they arent used again

void fun(int cb, int tb, int ssf, int ts, string asf, vector<bool> &itemsvisited){
	if(cb > tb){
		if(ssf==ts){
			cout<<asf<<endl;
		}
		return;
	}
	
	
	for(int i=1; i<=ts; i++){
		if(itemsvisited[i] == false){
			itemsvisited[i] = true;
			fun(cb+1, tb, ssf+1, ts, asf+to_string(i), itemsvisited);
			itemsvisited[i] = false;
		}
    }	

		fun(cb+1, tb, ssf, ts, asf+"0", itemsvisited);
		
	
}

void solve()
{	
	int n, r;
	cin>>n>>r;
	int tb = n;
	int ts = r;
	vector<bool> itemsvisited(n+1);
	
	fun(1, tb, 0, ts, "", itemsvisited);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

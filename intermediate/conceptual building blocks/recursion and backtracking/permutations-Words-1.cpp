#include <bits/stdc++.h>
using namespace std;

// Permutations - Words - 1

unordered_set<string> us;

void fun(string s, int idx){
    if(idx == s.size()){
        if(us.find(s) == us.end()){
        	us.insert(s);
        	cout<<s<<endl;
        }
        return;
    }

    for(int i = idx; i<s.size(); i++){
        swap(s[idx], s[i]);
        fun(s, idx + 1);
        swap(s[idx], s[i]);

    }
}


void fun2(int n, map<char,int> mp, int idx , string asf){
    if(idx == n){
        cout<<asf<<endl;
        return;
    }

    for(auto it = mp.begin() ; it != mp.end() ; it++){

        if(it->second > 0){
            it->second -= 1;
            fun2(n , mp, idx + 1, asf + (it -> first ));
            it->second += 1;
        }

    }

}


void solve()
{	
	string s ;
    cin>>s;
    // fun(s, 0);

    map<char,int> mp;
    for(auto ch : s){
        mp[ch]++;
    }
    int n = s.size();
    fun2(n , mp, 0 , "");
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

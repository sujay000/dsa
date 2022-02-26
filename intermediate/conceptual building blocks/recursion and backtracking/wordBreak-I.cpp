#include <bits/stdc++.h>
using namespace std;

// Word Break - I

void fun(string ip, unordered_set<string> &bag, string asf ){

    if(ip.size() == 0){
        
        
        cout<<asf;
        cout<<endl;
        
        
        return;
    }

    for(int i=1; i<= ip.size(); i++){
        string left = ip.substr(0, i);
        string right = ip.substr(i);
        if(bag.find(left) != bag.end()){
            fun(right, bag, asf + left+ " ") ;
        }

    }

}



void solve()
{	
    int n;
    cin>>n;
    unordered_set<string> bag;

    for(int i =0; i<n; i++){
    	string t;
    	cin>>t;
    	bag.insert(t);
    }
    
    string s;
    cin>>s;
    
    fun(s, bag, "");


}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

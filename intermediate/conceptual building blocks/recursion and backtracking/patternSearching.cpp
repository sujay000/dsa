#include <bits/stdc++.h>
using namespace std;


// Pattern Matching

void fun(string s1, string s2, unordered_map<char, string> &ump, string op){
    if(s1.size() == 0){
        if(s2.size() ==  0)
        {    
        	// for(auto x : ump){
                // cout<<x.first<<" -> "<<x.second<<", ";
			// 
            // }
            // cout<<".";
            
            // but to print in format of question
            
            
        	unordered_set<char> us;
        	for(auto ch : op){
        		if(us.find(ch) == us.end()){
        			us.insert(ch);
        			cout<<ch<<" -> "<<ump[ch]<<", ";
        		}
        	}
        	
        	cout<<"."<<endl;
        	
        	
        	
            
        
        }
        return ;
    }
  
    char ch = s1[0];
    string rop = s1.substr(1);
    
    

    if(ump.find(ch) != ump.end()){
    	

        string t = ump[ch];

        if(s2.size() >= t.size() ){
            string left = s2.substr(0, t.size());
            string right = s2.substr(t.size());

            if(left.compare( t ) == 0){

                fun(rop , right, ump, op);

            }
        }

    }
    else{

        for(int i =1; i<= s2.size() ; i++){
            string left = s2.substr(0, i);
            string right = s2.substr(i);
            ump[ch] = left;
            fun(rop, right, ump, op );
            
            ump.erase(ump.find(ch));

        }

    }


}

void solve()
{	
	string str, pat;
    cin>>str>>pat;
    unordered_map<char, string> ump;

    fun( pat, str, ump, pat );
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

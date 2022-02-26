#include <bits/stdc++.h>
using namespace std;

// Remove Invalid Parenthesis
// just format asked in q is diff

bool isvalid(string s){

    stack<char> st;
    int n = s.size();
    for(int i=0; i<n; i++){
    	
        char ch = s[i];
        
        if(ch == '('){
            st.push(ch);
        }
        
        else{
        	
            if(st.empty() == true ){
                return false;
            }
            st.pop();
            
        }
    }
	
	return(st.empty());
}


int getmin(string s){

    int n = s.size();
    stack<char> st;
    for(int i =0; i<n; i++){
        char ch = s[i];
        if(ch == '('){
            st.push(ch);
        }
        else{
            if(st.empty() || st.top() == ')'){
                st.push(ch);
            }
            else if(st.top() == '('){
                st.pop();
            }
        }
    }

    return  st.size();
}


void fun(string s, unordered_set<string> &bag, int mr){

    if(mr == 0){
        if(getmin(s) == 0) // or isvalid(s) == true
        {
            bag.insert(s);
        }

        return;
        
    }
    
    int n = s.size();
    
    for(int i=0; i<n; i++){
    	string t = s;
    	
        t.erase(t.begin() + i);

        fun(t, bag, mr-1);
    }

}


void solve()
{	
    string s;
    cin>>s;
    
    unordered_set<string> bag;
	
	int mr = getmin(s);
	
	fun(s , bag, mr);

	
	
	for(auto s: bag){
		cout<<s<<endl;
	}

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

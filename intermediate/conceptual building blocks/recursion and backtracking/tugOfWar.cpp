	#include <bits/stdc++.h>
	using namespace std;
	
	// Tug Of War
	
	int mndiff = INT_MAX;
	string ans = "";
	
	//sos1 -> sum of set1
	//to much to print in format read the method and understand the code
	
	
	void fun(vector<int> &arr, vector<int> &set1, vector<int> &set2, 
				int sos1, int sos2, int idx){
					
					
					
	
	    	if(idx == arr.size()){
	    		
		        if(abs(sos1 - sos2) < mndiff){
	            mndiff =  abs(sos1 - sos2);
		            {
		            	// just storing for ans format
		            string a ;
		            a += '[';
		            for(int i = 0; i<set1.size(); i++){
		             	string x = to_string(set1[i]) ;
		             	if(i == set1.size() - 1){
		             		 a += (x);
		             	}
		             	else{
		             		a += (x);
		             		a += ", ";
		             	}
		             }
		             a += ']';
		            a += " ";
		            a += '[';
		            for(int i = 0; i<set2.size(); i++){
		             	string x = to_string(set2[i]) ;
		             	if(i == set2.size() - 1){
		             		 a += (x);
		             	}
		             	else{
		             		a += (x);
		             		a += ", ";
		             	}
		             }
		             	a += ']';
						ans = a;
		        	}
	        	}
	        	return;
	        }
	        
	
	
	        int t = arr[idx] ;
			
			if(set1.size() < ((arr.size() + 1)/ 2 )){
	        set1.push_back(t);
	        fun(arr, set1, set2, sos1 + t, sos2, idx+1 );
	        set1.erase(set1.begin() + set1.size() - 1);
	        }
			
			if(set1.size() < ((arr.size() + 1)/ 2 )){
	        set2.push_back(t);
	        fun(arr, set1, set2, sos1, sos2 + t, idx+1 );
	        set2.erase(set2.begin() + set2.size() - 1);       
			}
			
	        
	    }
	
	
	void solve()
	{	
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	
	    vector<int> set1, set2;
	
	    fun(arr, set1, set2 , 0 , 0, 0);
	    cout<<ans;
	
	}
	
	
	
	int main()
	{
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    
	        solve();
	    
	    return 0;
	}
	
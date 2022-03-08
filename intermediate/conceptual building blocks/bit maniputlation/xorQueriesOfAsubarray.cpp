  #include<bits/stdc++.h>
using namespace std;

// Xor Queries of a subarray


vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> prexor(arr.size());
        prexor[0] = arr[0];
        for(int i = 1; i<arr.size(); i++){
            prexor[i] = (prexor[i-1] ^ arr[i]) ;
        }

        vector<int> res(queries.size());

        for(int i = 0; i<queries.size(); i++){
            int lefti = queries[i][0];
            int righti = queries[i][1];
            res[i] = (prexor[lefti] ^ prexor[righti] ^ arr[lefti]) ;
        }
		
	
		
        return res;
    }

int main()
{
    int n;cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;++i) cin>>v1[i];
    int k;cin>>k;
    vector<vector<int>> queries(k,vector<int>(2));
    for(int i=0;i<k;++i) cin>>queries[i][0]>>queries[i][1];
    vector<int> ans=xorQueries(v1,queries);
    for(int ele:ans) cout<<ele<<" ";
    cout<<"\n";
    
    return 0;
}
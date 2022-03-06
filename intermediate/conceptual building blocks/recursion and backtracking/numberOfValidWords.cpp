#include<bits/stdc++.h>
using namespace std;

// Number Of Valid Words

vector<int> findNumOfValidWords(vector<string> &words,vector<string> &puzzles)
{   
    vector<int> res;
    map<char , vector<int> > m;
	
	//we dont need to it
    // for(int i =0; i<26; i++){
        // vector<int> temp;
        // m[i+ 'a'] = temp;
    // }

    for(string word : words){
        int mask = 0;

        for(char ch: word){
            mask =( mask | (1<<(ch-'a')) );
        }

		unordered_set<char> us;
		
        for(char ch : word ){
        	if(us.find(ch) == us.end()){
        		us.insert(ch);
        		m[ch].push_back(mask);
        	}
            
        }
    }

    
     for(string puzzle : puzzles){
         int pmask = 0;
         for(char ch : puzzle){
             pmask = ( pmask | (1<<(ch-'a')) ) ;
         }
     	
         int count = 0;
         char falpha = puzzle[0];
         vector<int> toCheckWords = m[falpha];
         for(int wordmask : toCheckWords){
             if( (wordmask & pmask) == wordmask  ){
                 count++;
             }
         }

         res.push_back(count);
     }



    return res;
}

int main()
{
    int n;cin>>n;
    vector<string> words(n);
    for(int i=0;i<n;++i) cin>>words[i];
    int m;cin>>m;
    vector<string> puzzles(m);
    for(int i=0;i<m;++i) cin>>puzzles[i];
    vector<int> ans=findNumOfValidWords(words,puzzles);
    for(int i=0;i<m;++i) 
        cout<<puzzles[i]<<" -> "<<ans[i]<<"\n";
    return 0;
}
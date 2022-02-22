#include <bits/stdc++.h>
using namespace std;

// Max Score


//sno -> score if the word is not included
//syes -> score if the word is included
//sword -> score of the current word

int fun(vector<string> words,vector<char> farr ,vector<int> score,int widx){

    if(widx == words.size()){

        return 0;
    }

    int sno = fun(words, farr, score, widx+1 );

    string word = words[widx];

    bool flag = true;
    int sword = 0;

    for(int i=0; i<word.size(); i++){
        char ch = word[i];

        if(farr[ch-'a'] == 0){
            flag = false;
        }

        farr[ch-'a']--;

        sword += score[ch-'a'];


    }


    int syes = 0;

    if(flag == true){
        syes = sword + fun(words, farr, score, widx+1 );
    }

    for(int i=0; i<word.size(); i++){
        char ch = word[i];

        farr[ch-'a']++;

    }

    return max(syes,sno);

}

void solve()
{	
	int n;
    cin>>n;
    vector<string> words(n);
    for(int i=0; i<n; i++){
        cin>>words[i];
    }
    int m; 
    cin>>m;
    vector<char> farr(26);
    for(int i=0; i<m; i++){
        char c;
        cin>>c;
        farr[c-'a']++;
    }

    vector<int> score(26,0);

    for(int i=0; i<26; i++){
        cin>>score[i];
    }

    int res = fun(words, farr, score, 0);
    cout<<res;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;


// All Palindromic Permutations


void fun(int cs, int ts, map<char ,int> &ump, char oddch, string asf){

    if(cs > ts ){
        string rev = asf;
        reverse(rev.begin(), rev.end());
        if(oddch != '#'){
            cout<<asf<<oddch<<rev;
            cout<<endl;
        }
        else
        {
            cout<<asf<<rev;
            cout<<endl;
        }
    }


    for(auto &t : ump){

        char ch = t.first;
        int freq = t.second;

        if(freq >0){
            t.second = t.second -1;
            fun(cs+1, ts, ump, oddch, asf + ch);
            t.second = t.second +1;
        }
    }

}


  
void solve()
{	
	string s;
    cin>>s;

    map<char,int> ump;

    for(char x : s){
        ump[x]++;
    }

    int oddcount = 0;
    char oddch = '#';
    int halfLen = 0;

    for(auto &t : ump){

        if(t.second % 2 == 1){
            oddcount++;
            oddch = t.first;
        }

        t.second = t.second / 2;

        halfLen += t.second;

    }

    if(oddcount > 1){
        cout<<-1<<endl;
        return;
    }

    fun(1,halfLen, ump, oddch, "");

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

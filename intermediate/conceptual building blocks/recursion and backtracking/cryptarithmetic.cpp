#include <bits/stdc++.h>
using namespace std;

// Cryptarithmetic

int getNum(unordered_map<char,int> &ump, string s){
    
    int res = 0;
    for(char x : s){
        res = res*10 + ump[x];
    }

    return res;
}



void fun(unordered_map<char,int> &ump, string uniq , int idx,vector<bool> usedNumbers, string s1, string s2, string s3){

    if(idx == uniq.size()){
        int num1 = getNum ( ump, s1);
        int num2 = getNum ( ump , s2);
        int num3 = getNum ( ump , s3);

        if( num1 + num2 == num3){
            for(char x = 'a' ; x <= 'z' ; x++){
                if(ump.find(x) != ump.end()){
                    cout<<x<<"-"<< ump[x]<<" ";
                }
            }
            cout<<endl;
        }
	
		return;
    }


    char ch = uniq[idx];

    for(int i = 0; i<=9; i++){
        if(usedNumbers[i] == false){
            usedNumbers[i] = true;
            ump[ch] = i;
            fun(ump, uniq, idx+1, usedNumbers, s1,s2,s3 );
            ump[ch] = -1;
            usedNumbers[i] = false;
        }

    }



}


void solve()
{	
	string s1, s2, s3;
    cin>>s1>>s2>>s3;

    unordered_map<char,int> ump;
    string uniq = "";

    for(char x: s1){
        if(ump.find(x) == ump.end()){
            ump[x] = -1;
            uniq += x;
        }
    }
    for(char x: s2){
        if(ump.find(x) == ump.end()){
            ump[x] = -1;
            uniq += x;
        }
    }
    for(char x: s3){
        if(ump.find(x) == ump.end()){
            ump[x] = -1;
            uniq += x;
        }
    }

    vector<bool> usedNumbers(10 , 0);

    fun(ump, uniq , 0, usedNumbers, s1, s2, s3);


}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

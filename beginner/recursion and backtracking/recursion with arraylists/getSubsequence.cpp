#include <bits/stdc++.h>
using namespace std;

// Get Subsequence


// using first char

vector<string> gss2(string s){
	
	if(s.size() == 0){
		vector<string> t;
		t.push_back("");
		return t;
	}
	
	
    char ch = s[0];
    vector<string> res;

    string ros = s.substr(1);   //rest of string
    vector<string> rres = gss2(ros);    //rres -> recursive result
    for(string x : rres){
        res.push_back("" + x);
    }
    for(string x : rres){
        res.push_back(ch + x);
    }

    return res;
}






//using ip op method
void gsshelper(string ip, string op, vector<string> &res){
    if(ip.size() == 0){
        res.push_back(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin());
    gsshelper(ip, op1, res);
    gsshelper(ip, op2, res);
    return;
}

vector<string> gss(string s){
    vector<string> res;
    gsshelper(s , "" , res);
    return res;   
}






int main(){
    string s;
    cin >> s;
    vector<string> ans = gss2(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}
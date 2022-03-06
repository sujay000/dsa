#include<bits/stdc++.h>
using namespace std;

// Minimum Number Of Software Developers

vector<int>sol;

void solution(vector<int>& people,int nskils,int cp,vector<int>& onesol,int smask){
    
    if( cp == people.size() ){

        if(   sol.size() == 0 || sol.size() > onesol.size() ){
        	if(smask == ( ( 1LL << nskils ) - 1 ))
            {
            	sol = onesol;
            }
        }

        return;
    }

    solution(people, nskils , cp + 1 , onesol , smask );


    onesol.push_back(cp);
    solution( people, nskils, cp +1 , onesol, (smask | people[cp]) );
    onesol.erase(onesol.end() - 1);

}

int main(){
    int n;
    cin>>n;

    unordered_map<string ,int>smap;
    for(int i=0;i<n;i++){
        string x;cin>>x;
        smap[x]=i;
    }
    int np;
    cin>>np;

    vector<int>people(np);

    for(int i=0;i<np;i++){
        int personskills;
        cin>>personskills;

        for(int j=0;j<personskills;j++){
            string skill;
            cin>>skill;

            int snum=smap[skill];
            people[i]=people[i]|(1<<snum);
        }
    }

    vector<int>soln;
    solution(people,n,0,soln,0);
    cout<<"[";
    for(int i=0;i<sol.size();i++){
        if(i==sol.size()-1){
            cout<<sol[i];
        }else{
            cout<<sol[i]<<", ";
        }
    }
    cout<<"]";

}
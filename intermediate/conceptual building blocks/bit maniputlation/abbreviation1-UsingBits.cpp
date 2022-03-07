#include<bits/stdc++.h>
using namespace std;

// Abbreviation 1 - Using Bits

    void solve(string str)
    {   
        
        for(int i =0; i< (1LL<<(str.size())) ; i++  ){
            string res;
            int count = 0;

            for(int j =0; j<str.size() ; j++){
                
                int b = str.size() - 1 - j ;
                
                if( ( i & (1LL<<b ) ) == 0 ){
                    res += (  ( count == 0 ) ? ("") : (to_string(count))  ) ;
                    res += str[j];
                    count = 0;
                }else{
                    count++;
                }
            }
            if(count > 0){
                res+= to_string(count)  ;
            }


            cout<<res<<endl;

        }
        


        
    }
    
	int main() {
        
        string str;
        cin>>str;
        solve(str);
    }
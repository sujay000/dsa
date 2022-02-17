#include<bits/stdc++.h>
using namespace std;

//Fractional Knapsack - Official
//std greedy algo

bool mySort(pair<int,int> a, pair<int,int> b){
    double val1 = (double) a.first / a.second ;
    double val2 = (double) b.first / b.second ;
    if(val1 >= val2)
        return true;
    else
        return false;

}


double fun(pair<int,int> arr[], int n , int cap){
    sort(arr, arr+n, mySort);

    double val = 0;

    for(int i = 0; i<n; i++){
        if(arr[i].second <= cap){
            cap = cap - arr[i].second;
            val = val + arr[i].first;
        }
        else{
            val = val + ((arr[i].first*cap)/ (double) arr[i].second );
            break;
        }
    }


    return val;
}




int main(){
    int n;
    cin>>n;
    pair<int,int> arr[n];
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        arr[i].first = t;
    }
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        arr[i].second = t;
    }
    int cap;
    cin>>cap;

    double res = fun(arr,n,cap);

    cout<<res;
}
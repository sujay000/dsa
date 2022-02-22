#include<iostream>
using namespace std;




bool isSmaller(int arr[],int i,int j ){
    cout<<"Comparing "<<arr[i]<<" and "<<arr[j]<<endl;
    if(arr[i]<arr[j]){
        return true;
    }else{
        return false;
    }
}

void swap(int arr[],int i,int j){
    cout<<"Swapping "<<arr[i]<<" and "<<arr[j]<<endl;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    
}


void bubbleSort(int arr[],int n){
   for(int i=0; i<n-1; i++){
        for(int j= 1; j< n-i; j++){
            if(isSmaller(arr,j,j-1)){
                swap(arr,j,j-1);
            }
        }
    } 
    
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bubbleSort(arr,n);
    print(arr,n);
    
}
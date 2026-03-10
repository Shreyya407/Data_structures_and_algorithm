#include<bits/stdc++.h>
using namespace std;

int Sort(int arr[],int n){
    for(int i=16;i<n;i++){
        if (arr[i]>=arr[i-1]){
            
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    // Sort(arr,n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    cout<<Sort(arr,n);
}

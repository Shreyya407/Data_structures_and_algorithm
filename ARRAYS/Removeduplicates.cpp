// Time Complexity:- O(n)
//Space Complexity :- O(1)

#include<bits/stdc++.h>

using namespace std;


int duplicate(int arr[] , int n){

   int i=0;
   for(int j=1;j<n;j++){
    if(arr[j]!=arr[i]){
        arr[i+1]=arr[j];
        i++;
        cout<<arr[i];
    }

   }
   return i+1;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   cout<<duplicate(arr,n);
}

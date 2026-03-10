//BRUTE FORCE METHOD- tc:- O(nlogn)

#include<iostream>
#include<algorithm>
using namespace std;


int seclargest(int arr[] , int n){

    sort(arr,arr+n);
    
    int large= arr[n-1];
    int secondlarge= -1;

    for(int i=n-2; i>=0 ; i--){
        if(arr[i]!=large)
        secondlarge=arr[i];
        break;
    }
     return secondlarge;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<seclargest(arr,n);
}

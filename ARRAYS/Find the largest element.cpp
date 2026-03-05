//FIND THE LARGEST ELEMENT IN AN ARRAY
// Time Complexity:- O(n)


#include<iostream>
using namespace std;

int largest(int arr[] , int n){
    int large= arr[0];
    for(int i=0; i<n ; i++){
        if(arr[i]> large)
        large=arr[i];
    }
return large;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<largest(arr,n);
}

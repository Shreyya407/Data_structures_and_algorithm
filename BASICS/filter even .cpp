
#include<iostream>
using namespace std;

void filtereven(int arr[] , int n ){
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int n = 5;  
    int arr[5] = {11,26,32,49,58};
    filtereven(arr,n);
}
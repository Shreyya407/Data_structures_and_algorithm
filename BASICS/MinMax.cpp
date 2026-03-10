#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5] ={0,1,2,3,5};

    int largest = arr[0];
    int smallest = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>largest){
        largest=arr[i];
        }
    }
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
        smallest=arr[i];
        }
}
cout<<"Largest: "<<largest<<endl;
cout<<"Smallest: "<<smallest<<endl;
cout<<"("<<largest<<","<<smallest<<")";   //TUPLE
return 0;
    
}
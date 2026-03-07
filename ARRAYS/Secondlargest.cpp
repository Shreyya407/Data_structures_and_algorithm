//TIME COMPLEXITY :- O(n)

#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,4};
    int n=5;

    int largest = arr[0];
    int slargest = -1;

    for(int i=1;i<n;i++){
        if(arr[i]>largest)
        slargest=largest;
        largest=arr[i];

    }
    cout<<slargest;
}

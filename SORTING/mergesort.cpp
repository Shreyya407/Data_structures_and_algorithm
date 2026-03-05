// Time Complexity :- O(n log n)- total calls * wd in each call
//                 
//Space Complexity :- O(n)


#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr , int start , int mid , int end)
{
    vector<int> temp; 
    int i= start , j=mid +1;


    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back (arr[j]);
            j++;
        }
    }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }

        while(j<=end){
            temp.push_back(arr[j]);
            j++;
        }
    
for (int idx =0; idx<temp.size(); idx++){
    arr[idx+start]=temp[idx];
}
    
}
void mergesort( vector<int> &arr, int start , int end){
   if (start< end){

    int mid= start+ (end-start)/2;

    mergesort(arr, start, mid) ;//LEFT
    mergesort(arr, mid+1,end); //RIGHT

    merge(arr,start,mid,end);
   }
}

int main(){
    vector<int> arr = {12,31,38,32,17};
    mergesort(arr,0,arr.size()-1);

    for(int val: arr) {
        cout<<val<<" ";
    }

    cout<<" "<<endl; 
    return 0;
}

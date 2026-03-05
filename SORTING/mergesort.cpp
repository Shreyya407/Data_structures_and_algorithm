#include<iostream>
#include<vector>
using namespace std;
int partition (vector<int> &arr , int start , int end){
    int idx= start-1 ,pivot =arr[end];

    for(int j= start; j<end; j++){
        if(arr[j]<= pivot){
        idx++;
        swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quicksort(vector<int> &arr , int start , int end){
    if(start<end){
        int pivIdx=partition(arr,start,end);
        quicksort(arr,start,pivIdx-1);  //left
        quicksort(arr,pivIdx+1,end); //right

    }
}
int main(){
    vector<int> arr = {12,31,38,32,17};
    quicksort(arr,0,arr.size()-1);

    for(int val: arr) {
        cout<<val<<" ";
    }

    cout<<" "<<endl; 
    return 0;
}

#include<iostream>
using namespace std;

int recfib(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    return recfib(n-1) + recfib(n-2);

}

void fibonacci(int n){
    int first=0;
    int second=1;
    int next;

        for(int i = 0; i < n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;

    }
}

int main(){
    int n;
    cin >> n;
    fibonacci(7);  // Time complexity :- O(n)
    cout<<endl;
   for(int i = 0; i < n; i++){
        cout << recfib(i) << " ";  //Time Complexity :- O(2^n)
   }
}
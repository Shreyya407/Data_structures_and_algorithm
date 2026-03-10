#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> num;
    cin >> n;

    int arr[5] = {6,7,8,4,1};
    int index = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            index = i;
            break;
        }
    }

    cout << index;
    return 0;
}
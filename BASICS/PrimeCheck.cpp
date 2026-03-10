#include <iostream>
using namespace std;

bool Prime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    if (Prime(n))
        cout << "True";
    else
        cout << "False";

    return 0;
}
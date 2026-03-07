#include<iostream>
using namespace std;

void patternleft(int n){
    for(int i=0;i<=n;i++){
        for (int j=0; j<i; j++){
            cout<<" *";
        }
        cout<<endl;
    }
}
void patternright(int n) {
    for (int i = 1; i <= n; i++) {          
        
        for (int j = 1; j <= n; j++) {      
            if (j <= n - i)
                cout << " ";
            else
                cout << "*";
        }

        cout << endl;
    }
}

// void patterncenter(int n){
//     for(int i=0;i<=n*2-1;i++){
        
//     }
// }

int main() {
    patternleft(4);
    patternright(4);
}
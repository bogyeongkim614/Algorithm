#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for(int i=N; i>=0; i--) {
        int j=0;
        for(int j=0; j<N-i; j++) {
            cout <<" ";
        }
        for(int k=0; k<i; k++) {
            cout <<"*";
        }
        cout << '\n';
    }
    return 0;
}
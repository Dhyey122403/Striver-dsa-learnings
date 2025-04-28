#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){ // Rows for Increasing Stars n 
        int count = i+1; // no of stars
        for(int j = 0 ; j < count ; j++){ // print *
            cout << "*";
        }
        cout << endl;
    }
    // Skipping one line so n-1
    for(int i = 0 ; i < n-1 ; i++){ // Rows for Decreasing Stars n-1 
        int count = n-i-1;
        for(int j = 0 ; j < count ; j++){ // print *
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

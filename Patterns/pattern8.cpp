#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int count = 2*n-1; // no of space + star in one row
    for(int i = 0 ; i < n ; i++){
        int count_star = 2*(n-i-1)+1; // with each row the star decrease in odd no 
        int count_space = count - count_star; // count of star + space per row is constant
        for(int j = 0 ; j < count_space/2 ; j++){ // print 1st spaces by 2
            cout << " ";
        }
        for(int j = 0 ; j < count_star ; j++){ // print all *
            cout << "*";
        }
        for(int j = 0 ; j < count_space/2 ; j++){ // print remaining spaces
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

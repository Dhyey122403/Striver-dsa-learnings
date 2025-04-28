#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    bool num = true; // starts with 1
    for(int i = 0 ; i < n ; i++){ // Rows 
        int count = i+1; // No of Numbers
        for(int j = 0 ; j < count ; j++){ // print 1
            cout << int(num);
            num = !num; // 1 becomes 0 , 0 becomes 1
        }
        num = !num; // 1 becomes 0 , 0 becomes 1
        cout << endl;
    }
    return 0;
}

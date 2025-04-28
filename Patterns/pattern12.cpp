#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int num = 1;
    for(int i = 0 ; i < n ; i++) 
    {
        for(int j = 0 ; j  < num ; j++){ // print numbers from 1 to n
            cout << j+1;
        }
        for(int j = 0 ; j < 2*(n-i-1) ; j++) // print spaces
        {
            cout << " ";
        }
        for(int j = num ; j > 0 ; j--){ // print numbers form n to 1
            cout << j;
        }
        cout << endl;
        num++;
    }
    return 0;
}

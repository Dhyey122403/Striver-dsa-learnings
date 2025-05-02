#include <bits/stdc++.h>
using namespace std;

int sqrtN(int n){
    int l = 1; // sqrt lies between 1 to n
    int r = n; 
    int ans = 0; // initialising it as 0
    while(l<=r){
        int m = l + (r-l)/2; // mid
        if(m*m == n) { // if matches in a 1st try
            ans = m; 
            break;
        }
        else if(m*m > n) { // if square of mid > n
            r = m - 1; // lies in previous half
        }
        else{ // if square of mid < n
            ans = m;
            l = m + 1; // lies in next half
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << sqrtN(n) << endl;
    return 0;
}

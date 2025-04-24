#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n >> i;
    int k = 1 << i;
    int res =  n | k;
    cout << n << " by "<< i <<"th bit is " << res << endl; 
}

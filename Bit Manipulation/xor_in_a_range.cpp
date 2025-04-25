#include <bits/stdc++.h>
using namespace std;

int xor_1_to_n(int n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    else return 0;
}
int main()
{
    int l;
    int r;
    cin >> l >> r;
    int xor_l = xor_1_to_n(l);
    int xor_r = xor_1_to_n(r);
    int xor_l_r = xor_l^xor_r;
    cout << xor_l_r << endl;
    return 0;
}

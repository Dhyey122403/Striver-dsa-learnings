#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin >> i;
    int n;
    cin >> n;
    cout << (((n>>i)&1) == 1); // set ith bit
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(ceil(log2(n)) == log2(n)) cout << "True";
    else cout << "False";
}

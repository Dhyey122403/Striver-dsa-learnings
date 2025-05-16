#include <bits/stdc++.h>
using namespace std;

int factorial(int n){ // use long long for number above 16
    if(n==0) return 1;
    else return n*factorial(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}

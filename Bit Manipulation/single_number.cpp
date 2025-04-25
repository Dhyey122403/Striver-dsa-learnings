#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {2,3,4,5,3,4,5};
    int n = 0;
    for(auto i:v){
        n = i^n;
    }
    cout << n;
    return 0;
}

// x^x=0 and 0^x=x

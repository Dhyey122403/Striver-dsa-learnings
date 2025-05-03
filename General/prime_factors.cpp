#include <bits/stdc++.h>
using namespace std;

vector<int> primeFactors(int n){
    vector<int> v;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n%i==0) {
            v.push_back(i);
            while(n%i==0)
                n = n/i;
        }
    }
    if(n!=1) v.push_back(n);
    return v;
}
int main()
{
    int n;
    cin >> n;
    vector <int> f = primeFactors(n);
    for(auto i:f) 
        cout << i << " ";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int n){
    vector<int> divs;
    for(int i = 1 ; i*i <= n ; i++){
        if(n%i==0){
            if((n/i)!=i){
                divs.push_back(i);
                divs.push_back(n/i);
            }
            else divs.push_back(i);
        } 
    }
    sort(divs.begin(),divs.end());
    return divs;
}

int main()
{
    int n;
    cin >> n;
    vector<int> divisor = divisors(n);
    for(auto i:divisor)
        cout << i << " ";
    return 0;
}

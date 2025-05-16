#include <bits/stdc++.h>
using namespace std;

void reverse_arr(int i, vector<int> &v){
    int n = v.size();
    if(i >= n/2) return;
    swap(v[i],v[n-i-1]);
    reverse_arr(i+1,v);
}

int main()
{
    vector<int> v = {1,2,3,4,5,6};
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
    reverse_arr(0,v);
    for (auto i : v) {
        cout << i << " ";
    }
    return 0;
}

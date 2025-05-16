#include <bits/stdc++.h>
using namespace std;

void reverse_arr(int l, int r, vector <int> &v){
    if(l >= r) return;
    swap(v[l],v[r]);
    reverse_arr(l+1,r-1,v);
}

int main()
{
    vector<int> v = {1,2,3,4,5,6};
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
    reverse_arr(0,v.size()-1,v);
    for (auto i : v) {
        cout << i << " ";
    }
    return 0;
}

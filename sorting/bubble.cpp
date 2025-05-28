#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &v){
    int n = v.size();
    for(int i = n-1 ; i >= 0 ; i--){
        for(int j = 0 ; j < i ; j++){
            if(v[j] > v [j+1]) swap(v[j+1],v[j]);
        }
    }
}
int main()
{
    vector<int> v = {1,3,4,2};
    for (int i = 0; i < 4; i++) {
        cout << v[i] << " ";
    }
    bubble_sort(v);
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << v[i] << " ";
    }    

    return 0;
}

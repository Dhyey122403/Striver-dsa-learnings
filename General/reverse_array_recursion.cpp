#include <bits/stdc++.h>
using namespace std;

void reverse_array_using_recursion(vector<int> &v,int start,int end){
    if(start<end){
        swap(v[start],v[end]);
        reverse_array_using_recursion(v,start+1,end-1);
    }
    
}
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    reverse_array_using_recursion(v,0,n-1);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &v,int n){
    int left = 0;
    int right = v.size()-1;
    int ans = right;
    while(left<=right){
        int mid = left + (right - left)/2;
        
        if(v[mid] >= n){
            ans = mid;
            right = mid - 1;
        } 
        else left = mid + 1; 
    }
    return ans;
}
int main()
{
    vector<int> v1 = {1,2,2,3};
    int x1 = 2;
    vector<int> v2 = {3,5,8,15,19};
    int x2 = 9;
    // output must be 1 and 3
    cout << lowerBound(v1,x1) << " and " <<  lowerBound(v2,x2);

    return 0;
}

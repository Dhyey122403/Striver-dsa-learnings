#include <bits/stdc++.h>
using namespace std;

int RBinarySearch(vector<int> &v,int low, int high, int target){
    if(low > high) return -1;
    int mid = (low + high)/2;
    if(v[mid]==target) return mid;
    else if(v[mid] > target) return RBinarySearch(v,low,mid-1,target);
    else return RBinarySearch(v,mid+1,high,target);
}

int main()
{
    vector<int> v = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384};
    cout << RBinarySearch(v,0,v.size()-1,512);
    return 0;
}

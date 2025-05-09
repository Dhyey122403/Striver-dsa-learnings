#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
    void printArr(vector<int>& nums){
        for(auto i:nums)
            cout << i << " ";
    }
};

int main(){
    vector<int> v = {5,3,4,1,0};
    Solution s;
    s.printArr(v);
    cout << endl;
    for(int i = 0 ; i < 5 ; i++){
        s.rotate(v,1);
        s.printArr(v);
        cout << endl;
    }
    
}

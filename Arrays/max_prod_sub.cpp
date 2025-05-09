#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int max_sub_arr = INT_MIN;
            int prefix_mul = 1;
            int suffix_mul = 1;
            for(int i = 0 ; i < nums.size() ; i++){
                if(prefix_mul == 0) prefix_mul = 1;
                if(suffix_mul == 0) suffix_mul = 1;
                prefix_mul *= nums[i];
                suffix_mul *= nums[nums.size() - 1 - i];
                max_sub_arr = max(max_sub_arr, max(prefix_mul,suffix_mul));
            }
            return max_sub_arr;
        }
};

int main(){
    vector<int> v1 = {2,3,-2,4};
    vector<int> v2 = {-2,0,-1};
    vector<int> v3 = {-1,-1,0};
    
    Solution s;
    
    cout << s.maxProduct(v1) << endl;
    cout << s.maxProduct(v2) << endl;
    cout << s.maxProduct(v3) << endl;
}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0; // left pointer
        int right = nums.size()-1; // right pointer
        while(left <= right) // until left matcher right
        { 
            int mid = (left + right)/2; // middle element
            if(nums[mid] == target) return mid; // if target matches
            else if(nums[mid] < target) left = mid+1; // if target is greater than mid , so element is in upper half 
            else right = mid-1; // if target is lesser than mid , so element is in upper half
        }
        return -1; // returns -1 if no solution found
    }
};

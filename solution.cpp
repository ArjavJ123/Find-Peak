class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        return search(nums, 0, nums.size() -1);
    }
    int search(vector<int> nums, int l, int r) {
        if(l==r) {
            return l;
        }
        int m = (l+r)/2;
        if(nums[m] > nums[m+1]) {
            return search(nums, l, m);
        }
        return search(nums, m+1, r);
    }
};

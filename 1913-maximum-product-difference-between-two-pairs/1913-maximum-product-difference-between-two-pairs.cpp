class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int first = nums[nums.size()-1]*nums[nums.size()-2];
        int second = nums[0]*nums[1];
        int ans = first-second;
        return ans;
    }
};
class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int product = nums.size()*nums[0];
        int ans=sum-product;
        return ans;
    }
};
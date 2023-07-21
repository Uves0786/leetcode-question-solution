class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int>v1;
        int k;
        for(int i=0;i<nums.size();i++)
        {
            k=pow(nums[i],2);
            v1.push_back(k);
        }
        sort(v1.begin(),v1.end());
        return v1;
    }
};
class Solution {
public:
    void permution(vector<int>nums,int index,vector<vector<int>>&ans)
{
    if (index>=nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i =index; i <nums.size(); ++i)
    {
        swap(nums[index],nums[i]);
        permution(nums,index+1,ans);
        // backtrack
        swap(nums[index],nums[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>>ans;
        int index=0;
        permution(nums,index,ans);
        return ans;
    }
};
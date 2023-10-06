class Solution {
public:
    void subset(vector<int>nums,vector<int>output,int index,vector<vector<int>>&ans)
{
    if (index==nums.size())
    {
        ans.push_back(output);
        return;
    }
    // exclude call
    subset(nums,output,index+1,ans);
    int element=nums[index];
    output.push_back(element);
    //include call
    subset(nums,output,index+1,ans);
          output.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>>ans;
        vector<int>output;
        subset(nums,output,0,ans);
        return ans;
    }
};
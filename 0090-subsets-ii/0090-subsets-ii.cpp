class Solution {
public:
    vector<vector<int>>ans;
    void subset(vector<int>&nums,vector<int>&out,int index)
    {
    if (index==nums.size())
    {
        ans.push_back(out);
        return;
    }
    // include call
    out.push_back(nums[index]);
     subset(nums,out,index+1);
      out.pop_back();
   while(index+1<nums.size() and nums[index]==nums[index+1])
   {
       index++;
   }
    //exclude call
    subset(nums,out,index+1);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
       vector<int>out;
       sort(nums.begin(),nums.end());
        subset(nums,out,0);
        return ans; 
    }
};
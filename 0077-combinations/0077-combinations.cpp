class Solution {
public:
    vector<vector<int>>ans;
    void subset(vector<int>&nums,vector<int>&output,int index,int k)
   {
    if (output.size()==k)
    {
        ans.push_back(output);
        return;
    }
    if (index==nums.size())
    {
        return;
    }
    // exclude call
    subset(nums,output,index+1,k);
    int element=nums[index];
    output.push_back(element);
    //include call
    subset(nums,output,index+1,k);
    output.pop_back();    
    }
    
    vector<vector<int>> combine(int n, int k)
    {
        vector<int>output,nums;
        int index=0;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i);
        }
         subset(nums,output,index,k);
        return ans;
    }
};
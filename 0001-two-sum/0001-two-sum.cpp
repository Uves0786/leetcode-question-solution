class Solution {
public:
    vector<int> twoSum(vector<int>&nums, int target) 
    {
        vector<pair<int,int>>v1;
        for(int i=0;i<nums.size();i++)
        {
            v1.push_back({nums[i],i});
        }
        sort(v1.begin(),v1.end());
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            if(v1[i].first+v1[j].first==target)
            {
                return {v1[i].second,v1[j].second};
            }
            
            if(v1[i].first+v1[j].first>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {0};
    }
};
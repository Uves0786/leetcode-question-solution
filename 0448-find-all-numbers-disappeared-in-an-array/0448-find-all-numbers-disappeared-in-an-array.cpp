class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        vector<int>v1;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++)
        {
            mp[i]++;
        }
        for(auto f:mp)
        {
            if(f.second==1)
            {
                v1.push_back(f.first);
            }
        }
        return v1;
    }
};
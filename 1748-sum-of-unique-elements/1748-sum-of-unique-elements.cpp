class Solution {
public:
    int sumOfUnique(vector<int>& nums)
    {
        map<int,int>mp;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto f:mp)
        {
            if(f.second==1)
            {
                sum+=f.first;
            }
        }
        return sum;
    }
};
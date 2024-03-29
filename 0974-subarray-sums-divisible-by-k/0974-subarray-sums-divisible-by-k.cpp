class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int count=0;
        int sum=0;
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
           int rem=sum%k;
            if(rem<0)
            {
                rem+=k;
            }
            
            if(mp.find(rem)!=mp.end())
            {
                count+=mp[rem];
                mp[rem]+=1;
            }
            else
            {
                mp[rem]+=1;
            }
        }
        return count;
    }
};
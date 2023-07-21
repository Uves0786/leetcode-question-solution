class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int k=nums.size(),h;
        for(int i=0;i<=k;i++)
        {
            if ( find(nums.begin(), nums.end(), i) != nums.end() )
            {
                continue;
            }
            else
            {
                h=i;
            }
        }
        return h;
    }
};
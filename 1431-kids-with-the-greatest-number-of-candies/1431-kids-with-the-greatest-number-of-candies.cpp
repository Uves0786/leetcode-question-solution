class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        vector<bool>ans;
        int mx=INT_MIN;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>mx)
            {
                mx=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++)
        {
            int k=candies[i]+extraCandies;
            if(k<mx)
            {
                ans.push_back(false);
            }
            else
            {
                ans.push_back(true);
            }
        }
        return ans;
    }
};
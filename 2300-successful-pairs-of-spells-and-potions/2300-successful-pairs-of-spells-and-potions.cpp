class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
    {
        vector<int>result;
        sort(potions.begin(),potions.end());
        int n=spells.size();
        int m=potions.size();
        int maxportion=potions[m-1];
        for(int i=0;i<n;i++)
        {
            long long minportion=ceil((1.0*success)/spells[i]);
            if(minportion>maxportion){
                result.push_back(0);
                continue;
            }
            
            int index=lower_bound(potions.begin(),potions.end(),minportion)-potions.begin();
            int count=m-index;
            result.push_back(count);
        }
        return result;
    }
};
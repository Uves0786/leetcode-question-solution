class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int ,int>mp;
         map<int ,int>ms;
        vector<int>v1;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            v1.push_back(it.second);
        }
        for(int i=0;i<v1.size();i++)
        {
            ms[v1[i]]++;
        }
        for(auto f:ms)
        {
            if(f.second>1)
            {
                return false;
                break;
            }
        }
        return true;
    }
};
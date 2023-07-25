class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        int count=0;
        map<char,int>mp;
        for(int i=0;i<words.size();i++)
        {
            string k=words[i];
            k+=allowed;
            for(int j=0;j<k.size();j++)
            {
               mp[k[j]]++;
            }
            if(mp.size()==allowed.size())
            {
                count++;
            }
            mp.clear();
           
        }
        return count;
    }
};
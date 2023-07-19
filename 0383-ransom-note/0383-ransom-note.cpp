class Solution {
public:
    bool canConstruct(string r, string m)
    {
        unordered_map<int,int>mp;
       if(r.size()>m.size())
       {
           return false;
       }
        else
        {
            for(int i=0;i<m.size();i++)
            {
                mp[m[i]]++;
            }
            for(int i=0;i<r.size();i++)
            {
                mp[r[i]]--;
                if(mp[r[i]]<0)
                {
                   return false; 
                }
            }
            return true;
            
        }
    }
};
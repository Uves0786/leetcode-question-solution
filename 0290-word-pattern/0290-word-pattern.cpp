class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
         unordered_map<char,string>mp;
        vector<string>vs;
        string tmp;
        for (int i = 0; i <s.length(); i++)
        {
            if (s[i]!=' ')
            {
               tmp.push_back(s[i]);
            }
            else{
                vs.push_back(tmp);
                tmp.clear();
            }
        }
        vs.push_back(tmp);
        if(vs.size()!=pattern.size())
        {
            return false;
        }
        else{
            unordered_map<string,int>freq;
            for (int i = 0; i <pattern.size(); i++)
            {
                if(mp.find(pattern[i])!=mp.end())
                {
                    if(mp[pattern[i]]!=vs[i])
                    {
                        return false;
                    }
                }
                else
                {
                    if(freq[vs[i]]>0)
                    {
                        return false;
                    }
                    mp[pattern[i]]=vs[i];
                    freq[vs[i]]++;
                }
            }
            

        }
        return true;
    }
};
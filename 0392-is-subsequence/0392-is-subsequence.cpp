class Solution {
public:
    bool isSubsequence(string s, string t)
    {
       bool flag=false;
        vector<char>v1;
        int i=s.size();
        int j=t.size();
        while(i>=0 && j>=0)
        {
                if(s[i]==t[j])
                {
                   i--;
                   j--;
                }
                else
                {
                    j--;
                }
            
        }
        if(i>=0)
        {
            return false;
        }
        return true;
        
    }
};  
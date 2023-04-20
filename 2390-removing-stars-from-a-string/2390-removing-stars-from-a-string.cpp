class Solution {
public:
    string ans;
    void remove(string &s,int index,string &ans)
    {
        if(index>=s.size())
        {
            return;
        }
        if(s[index]=='*')
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[index]);
        }
        remove(s,index+1,ans);
    }
    string removeStars(string s)
    {
        remove(s,0,ans);
        return ans;
    }
        
    
};
class Solution {
public:
    string toLowerCase(string s)
    {
        string to_lower;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>64 && s[i]<91)
            {
                to_lower.push_back(s[i]+32);
            }
            else
            {
               to_lower.push_back(s[i]); 
            }
            
        }
        return to_lower;
    }
};
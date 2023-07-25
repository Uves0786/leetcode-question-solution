class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        int count=0;
        set<char>st;
        for(int i=0;i<words.size();i++)
        {
            string k=words[i];
            k+=allowed;
            for(int j=0;j<k.size();j++)
            {
               st.insert(k[j]);
            }
            if(st.size()==allowed.size())
            {
                count++;
            }
            st.clear();
           
        }
        return count;
    }
};
class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        int s1,s2,count=0;
        s1=word1.size();
        s2=word2.size();
        string result;
        int i=0,j=0;
        while(i<s1 || j<s2)
        {
           if(i<s1)
           {
               result.push_back(word1[i++]);
           }
            if(j<s2)
           {
               result.push_back(word2[j++]);
           }
        }
        return result;
    }
};
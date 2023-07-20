class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
    {
        bool flag=true;
        string str1,str2;
        for(int i=0;i<word1.size();i++)
        {
            str1+=word1[i];
        }
        // cout << str1;
         for(int i=0;i<word2.size();i++)
        {
            str2+=word2[i];
        }
        // cout << str2;
        if(str1.size()!=str2.size())
        {
            return false;
        }
        else
        {
            for(int i=0;i<str1.size();i++)
            {
                if(str1[i]!=str2[i])
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
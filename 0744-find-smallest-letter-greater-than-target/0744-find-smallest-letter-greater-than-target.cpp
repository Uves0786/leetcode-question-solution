class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        char ans;
        int k=target;
         for(int i=0;i<letters.size();i++)
         {
             int first=letters[i];
             if(first>k)
             {
                 ans=letters[i];
                 break;
             }
             else
             {
                 ans=letters[0];
             }
         }
        return ans;
    }
};
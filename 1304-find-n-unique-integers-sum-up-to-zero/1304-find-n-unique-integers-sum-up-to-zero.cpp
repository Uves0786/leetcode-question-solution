class Solution {
public:
    vector<int> sumZero(int n)
    {
        vector<int>v1;
        if(n%2!=0)
        {
            for(int i=-(n/2);i<=n/2;i++)
            {
                v1.push_back(i);
            }
        }
        else
        {
            for(int i=-(n/2);i<=n/2;i++)
            {
                if(i!=0)
                {
                    v1.push_back(i);
                }
            } 
        }
        return v1;
    }
};
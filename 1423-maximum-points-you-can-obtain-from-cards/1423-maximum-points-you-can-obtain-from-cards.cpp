class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int right=0;
        int left=0;
        int step=cardPoints[0];
        int n=cardPoints.size();
        if(cardPoints.size()==k)
        {
            int sum =accumulate(cardPoints.begin(), cardPoints.end(),0);
            return sum;
            
        }
        else
        {
            for(int i=n-k;i<n;i++)
            {
                right+=cardPoints[i];
            }
            left=right;
            for(int i=0;i<k;i++)
            {
                left+=cardPoints[i]-cardPoints[n-k+i];
                right=max(right,left);    
            }
            return right;
        }
            
    }
};
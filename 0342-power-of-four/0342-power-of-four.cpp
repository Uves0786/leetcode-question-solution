class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n==1)
        {
            return true;
        }
        else if(n==0)
        {
            return false;
        }
        else if(n%4!=0)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }
        return isPowerOfFour(n/4);
    }
};
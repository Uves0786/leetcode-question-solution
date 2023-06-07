class Solution {
public:
    bool increasingTriplet(vector<int>& nums)
    {
        int i=0,n=nums.size();
      int first=INT_MAX;
      int second=INT_MAX;
     while(i<n)
     {
         if(nums[i]>second && second>first)
         {
             return true;
         }
         first=min(first,nums[i]);
         if(nums[i]>first)
         {
             second=min(nums[i],second);
         }
         i++;
     }
        return false;
    }
};
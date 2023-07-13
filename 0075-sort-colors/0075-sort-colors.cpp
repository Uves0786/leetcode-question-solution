class Solution {
public:
    void sortColors(vector<int>& nums)
    {
                vector<int>red;
                vector<int>white;
                vector<int>blue;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                red.push_back(0);
            }
            else if(nums[i]==1)
            {
                white.push_back(1);
            }
            else
            {
                blue.push_back(2);
            }
        }
        nums.clear();
        for(int i=0;i<red.size();i++)
        {
            nums.push_back(red[i]);
        }
         for(int i=0;i<white.size();i++)
        {
            nums.push_back(white[i]);
        }
         for(int i=0;i<blue.size();i++)
        {
            nums.push_back(blue[i]);
        }
       
    }
};
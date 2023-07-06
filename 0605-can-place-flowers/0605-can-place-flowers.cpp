class Solution {
public:
    bool canPlaceFlowers(vector<int>&watch_tower, int n)
    {
        int count=0;
        if(n==0)
        {
            return true;
        }
        for(int i=0;i<watch_tower.size();i++)
        {
            if(watch_tower[i]==0 && (i==0 || watch_tower[i-1]==0) && (i==watch_tower.size()-1 ||                            watch_tower[i+1]==0))
            {
                   watch_tower[i]=1;
                   n--;
                  if(n==0)
                {
                    return true;
                }
            }
        }
         return false;
        
    }
};
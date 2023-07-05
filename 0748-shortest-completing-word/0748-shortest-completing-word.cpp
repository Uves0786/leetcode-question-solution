class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words)
    {
        string s;
        map<char,int>mp;
        map<char,int>ms;
        vector<string>v1;
        for(int i=0;i<licensePlate.size();i++)
        {
          if(licensePlate[i]>96 && licensePlate[i]<122)
          {
              s+=licensePlate[i];
          }
          if(licensePlate[i]>64 && licensePlate[i]<91)
          {
              s+=tolower(licensePlate[i]);
          }
        }
        
       for(int i=0;i<s.size();i++)
       {
           mp[s[i]]++;
       }
        // for(auto f:mp)
        // {
        //     cout << f.first << " " <<  f.second;
        // }
        for(int i=0;i<words.size();i++)
        {
            string k=words[i];
            for(int i=0;i<k.size();i++)
            {
                ms[k[i]]++;
            }
            bool flag = true;
            for( auto f:mp)
            {
                if(ms.find(f.first) != ms.end() and ms[f.first] >= f.second)
                {
                    // f = false;
                    // break;
                }
                else
                {
                    flag = false;
                    break;
                }
                
            
            }
            if(flag == true)
            {
                v1.push_back(k);
            }
            ms.clear();
        }
         int min=INT_MAX;
        string ans;
        for(auto it:v1)
        {
            string h=it;
            if(h.size()<min)
            {
                min=h.size();
                ans=h;
            }
        }
        return ans;
    }
};
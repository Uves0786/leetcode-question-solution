class Solution {

public:

    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2)

    {

      map<string,int>mp;

      map<string,int>ms;

        vector<string>v1;

        vector<pair<int,string>>p;

        for(int i=0;i<list1.size();i++)

        {

            mp[list1[i]]+=i;

            ms[list1[i]]++;

        }

         for(int i=0;i<list2.size();i++)

        {

            mp[list2[i]]+=i;

            ms[list2[i]]++; 

        }

        for(auto f:ms)

        {

            if(f.second==2)

            {

               

               p.push_back({mp[f.first],f.first});

            }

        }

        sort(p.begin(),p.end());

        

        int minm = p[0].first;

        for(auto h:p)

        {

            if(h.first == minm)

            v1.push_back(h.second);

          

        }

        return v1;

    }

};
        


class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        int n = groupSizes.size();
        
        vector<vector<int>> ans;
        
        map<int,vector<int>> m; // used for storing a group in form of vector
        unordered_map<int,int> sizes; // it tells about the number of element present in the group at a moment
        
        for(int i=0;i<n;i++){
            
            if(sizes[groupSizes[i]]<groupSizes[i]){
                m[groupSizes[i]].push_back(i);
                sizes[groupSizes[i]]++;
            }
            else if(sizes[groupSizes[i]]==groupSizes[i]){
                sizes[groupSizes[i]] = 0;
                ans.push_back(m[groupSizes[i]]);
                m.erase(groupSizes[i]);
                m[groupSizes[i]].push_back(i);
                sizes[groupSizes[i]]++;
            }
        }
        
        for(auto x : m){
            ans.push_back(x.second);
        }
        
        return ans;
        
        
    }
};
class Solution {
public:
    int findMin(vector<int>& arr)
    {
        
        int start=0;
        int end=arr.size()-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        if(start+1>arr.size()){
            return arr[0];
        }
        return arr[start];
    }
};
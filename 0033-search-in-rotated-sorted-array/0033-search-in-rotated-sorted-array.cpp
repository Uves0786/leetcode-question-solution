class Solution {
public:
    int pivot(vector<int>& nums){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
    int binary(vector<int>& nums,int s,int e,int target){
        int start=s;
        int end=e;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int piv=pivot(nums);
        if(target>=nums[piv] && target<=nums[nums.size()-1]){
            return binary(nums,piv,nums.size()-1,target);
        }
        else{
             return binary(nums,0,piv-1,target);
        }
    }
};
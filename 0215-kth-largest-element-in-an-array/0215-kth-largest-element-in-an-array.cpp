class Solution {
public:
    
     void merge(vector<int>& nums,int start,int end)
 {
    int mid=(start+end)/2;
    int len1=mid-start+1;
    int len2=end-mid;
    int first[len1],second[len2];
    int k=start;
    for (int i = 0; i <len1; ++i)
    {
       first[i]=nums[k++]; 
    }
    k=mid+1;
    for (int i = 0; i <len2; ++i)
    {
       second[i]=nums[k++]; 
    }
    int index1=0;
    int index2=0;
    k=start;
    while(index1<len1 && index2<len2)
    {
        if (first[index1]<second[index2])
        {
           nums[k++]=first[index1++]; 
        }
        else
        {
            nums[k++]=second[index2++];
        }
    }
    while(index1<len1)
    {
        nums[k++]=first[index1++];
    }
    while(index2<len2)
    {
        nums[k++]=second[index2++];
    } 

 }
void merge_sort(vector<int>& nums,int start,int end)
{

    if (start>=end)
    {
        return;
    }
    int mid=(start+end)/2;
    // recursive call for ist array
    merge_sort(nums,start,mid);
    // recursive call for 2nd array
    merge_sort(nums,mid+1,end);
    // to add array
    merge(nums,start,end);
    
}
    int findKthLargest(vector<int>& nums, int k)
    {
        int m=0;
        merge_sort(nums,0,nums.size()-1);
        m=nums[nums.size()-k];
        return m;
    }
};
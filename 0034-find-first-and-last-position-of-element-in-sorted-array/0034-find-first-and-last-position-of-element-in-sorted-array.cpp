class Solution {
public:
int first(vector<int> nums, int target)
{
    int ans = -1;
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int second(vector<int> nums, int target)
{
    int ans = -1;
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
vector<int> searchRange(vector<int>& nums, int target)
{
    vector<int>ans;
    int first_ourr = first(nums, target);
    int second_ourr = second(nums, target);
    // cout << first_ourr << " " << second_ourr << endl;
            ans.push_back(first_ourr);
            ans.push_back(second_ourr);
    return ans;
}
};
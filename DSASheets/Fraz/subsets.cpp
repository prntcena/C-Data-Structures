class Solution {
public:
void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp, int i)
{
    if(i==nums.size())
    {
        ans.push_back(temp);
    }
    else
    {
        temp.push_back(nums[i]);
        helper(nums, ans, temp, i+1);
        temp.pop_back();
        helper(nums, ans, temp, i+1);
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp = {};
        vector<vector<int>> ans = {};
        helper(nums, ans, temp, 0);
        return ans;
    }
};

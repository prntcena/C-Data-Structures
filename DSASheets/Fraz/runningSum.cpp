class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currSum = 0;
        vector<int> v = {};
        for(int i=0;i<nums.size();i++)
        {
            currSum += nums[i];
            v.push_back(currSum);
        }
        
        return v;
    }
};

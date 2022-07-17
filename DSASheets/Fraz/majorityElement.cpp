class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
        
    }
};


// chori kiya hua hai.
//Note:- what is BMV algorithm

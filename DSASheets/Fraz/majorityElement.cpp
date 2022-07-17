class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
        
    }
};


// chori kiya hua hai.
//Note:- what is BMV algorithm


int majorityElement(vector<int>& nums) {
        int ans = 0;
        int count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[ans])
                count++;
            else
                count--;
                
            if(count == 0){
                count++;
                ans = i;
            }
        }
        return nums[ans];
    }

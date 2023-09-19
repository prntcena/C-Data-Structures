class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j+1;
                int high = n-1;
                while(low < high)
                {
                    if(nums[low]+nums[high]<newTarget)
                    {
                        low++;
                    }
                    else if(nums[low]+nums[high]>newTarget)
                    {
                        high--;
                    }
                    else
                    {
                        res.push_back({nums[i], nums[j], nums[low], nums[high]});
                        int tempIndex1 = low;
                        int tempIndex2 = high;
                        while(low<high and nums[low]==nums[tempIndex1]) low++;
                        while(low<high and nums[high]==nums[tempIndex2]) high--;

                    }
                }
                while (j+1 < n and nums[j]==nums[j+1]) j++;
            }
            while( i+1<n and nums[i]==nums[i+1]) i++;
        }
        return res;
    }
};

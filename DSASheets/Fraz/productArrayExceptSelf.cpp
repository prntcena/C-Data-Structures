class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int z = 0;
        int p = 1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                z++;
            }
            else
            {
                p*=nums[i];
            }
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(z!=0 and nums[i]!=0)
            {
                nums[i] =0;
                
            }
            else if(nums[i]==0)
            {
                if(z==1)
                {
                    nums[i] = p;
                }
                else
                {
                    nums[i] = 0;
                }
            }
            else
            {
                nums[i] = p/nums[i];
            }
        }
        return nums;
    }
};

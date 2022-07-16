class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int allZero = 1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                allZero = 0;
        }
        if(allZero==1)
        {
            return;
        }
        
        if(nums.size()==2 and nums[0]!=0 and nums[1]==0)
        {
            return;
        }
        
        for(int i=0,j=i+1;i<nums.size() and j<nums.size();i++)
        {
            if(nums[i]==0 and nums[j]!=0)
            {
                int temp = 0;
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
                continue;
            }
            else if(nums[i]==0 and nums[j]==0)
            {
                while(nums[j]==0)
                {
                    if(j==nums.size()-1)
                        return;
                    j++;
                }
                int temp1=0;
                temp1 = nums[i];
                nums[i] = nums[j];
                nums[j] = temp1;
                j++;
                continue;
            }
            else
            {
                j++;
            }
        }
    }
};

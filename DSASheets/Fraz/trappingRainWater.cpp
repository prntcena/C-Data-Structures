class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftmax =height[0];
        int rightmax = height[n-1];
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            if(height[i]>leftmax)
            {
                leftmax = height[i];
            }
            else
            {
                sum+= leftmax - height[i];
            }
        }
        
        //we have collected sum for entire water plus the extra water which is not as per the valid calculation
        
        //now we will calculate the highest block from the right side and if that is smaller that the highest block from left part, we will minus that extra amount of water
        
        
        for(int i=n-1;i>0;i--)
        {
            if(height[i]>rightmax)
            {
                rightmax = height[i];
            }
            if( leftmax> rightmax)
            {
                sum-=leftmax-rightmax;
            }
        }
        return sum;
    }
};

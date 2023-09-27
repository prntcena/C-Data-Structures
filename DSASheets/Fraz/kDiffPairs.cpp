//2 pointer approach
class Solution {
public:
    
    int findPairs(vector<int>& nums, int k) {
        //sort
        sort(nums.begin(), nums.end());
        int ans =0, i=0, j=1;
        for( i,j;i<nums.size() and j<nums.size();) //no end specified
        {
            if(i==j or nums[j]-nums[i]<k) // exclude same and smaller than target
            {
                j++;
            }
            else
            {
                if(nums[j]- nums[i]==k)
                {
                    ans++;
                    j++; //increment for now
                    for(;j<nums.size();j++)
                    {
                        //reach till last element in case j and j+1 are same elements
                        if(nums[j]!=nums[j-1])
                        break;
                    }
                    if(j==nums.size())
                    return ans;
                    //decrement again as it was previous
                    j--;
                }
                i++; // normal increment for next loop
                //reach till last element in case of repeating 
                while(i<j and nums[i]==nums[i-1])
                i++; 
            }
        }
        return ans;
    }
};


/*
//Map Approach
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> res;
        for(int i:nums)
        {
            res[i]++; // count frequency in map
        }

        int ans =0;// to count unique pair
        for(auto x:res)
        {
            if(k==0) //take same element as a unique pair
            {
                if(x.second>1) //if map has more than 1 frequency for same element
                ans++;
            }
            else
            {
                if(res.find(x.first+k)!=res.end()) // find if k-x.first exists in map with atleast 1 frequency
                ans++;
            }
        }
        return ans;
    }
};
*/

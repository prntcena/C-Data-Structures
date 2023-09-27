/*
//Maps approach1 
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res = {};
        int mx = *max_element(nums.begin(), nums.end());
        vector<int> temp(mx+1,0); 
        
        for(int i=0;i<nums.size();i++)
        {
            if(temp[nums[i]]==-1)
            {
                res.push_back(nums[i]);
            }
            temp[nums[i]]-=1;
        }
        return res;
    }
};
*/

//approach 2
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        

        int mx = *max_element(nums.begin(), nums.end());

        vector<int> h(mx + 1, 0);
        vector<int> newArr;
        for(int i=0; i<nums.size() ; i++){

            h[nums[i]]++;
        }

        for(int j=0; j<h.size(); j++){
            if(h[j]>1){

                newArr.push_back(j);
            }


        }
        return newArr;
    }
};

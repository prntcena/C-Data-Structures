class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c = 0;
        for(int j=0;j<nums1.size();j++)
        {
            if(nums1[j]!=0)
            {
                c = 1;
            }
        }
        if(c==0)
        {
            nums1 = nums2;
            return;
        }
        for(int i=0;i<nums2.size();i++)
        {
            nums1[m+i] = nums2[i];
        }
        
        sort(nums1.begin(), nums1.end());
        
    }
};

###################################################################################################################################################


//second and correct solution


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp = {};
        int i=0;
        int j=0;
        while(i<m and j<n)
        {
            if(nums1[i]<nums2[j])
            {
                temp.push_back(nums1[i]);
                i++;
            }
            else
            {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m)
        {
            temp.push_back(nums1[i]);
            i++;
        }
        while(j<n)
        {
            temp.push_back(nums2[j]);
            j++;
        }
        nums1 = temp;
    }
};

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int m=intervals.size();
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0],end=intervals[0][1];
        for(int i=1;i<m;i++)
        {
           if(intervals[i][0]<=end)
           {
               end=max(intervals[i][1],end);
           }
            else{
            res.push_back(vector<int>{start,end});
            start=intervals[i][0],end=intervals[i][1];
            }
        }
         res.push_back(vector<int>{start,end});
        return res;
    }
};

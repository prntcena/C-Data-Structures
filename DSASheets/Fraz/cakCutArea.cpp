class Solution {
public:
long  maxDiff(vector<int> v)
{
    //sort descending order wise so diff could be in +ve
    sort(v.rbegin(),v.rend());
    long  d=0;
    for(int i=0;i<v.size()-1;i++)
    {
        if(d< (v[i]-v[i+1]))
        {
            d = (v[i]-v[i+1]);
        }
    }
    //return maxDiff of the element
    return (d);

}
    int  maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        //insert 0th and last element of grid to consider the boundaries as well
        vector<int> hrays = {0};
        vector<int> vrays = {0};
        hrays.push_back(h);
        vrays.push_back(w);
        for(int i:horizontalCuts)
        {
            hrays.push_back(i);
        }
        for(int j:verticalCuts)
        {
            vrays.push_back(j);
        }
        
        long  hdiff =  maxDiff(hrays);
        long  vdiff = maxDiff(vrays);

        return (hdiff*vdiff)%1000000007;
        
        

    }
};

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx1=0;
        vector<int> v = nums;
    int k=0;
    for(k=v.size()-2;k>=0;k--)
    {
        if(v[k]<v[k+1])
        {
            idx1 = k;
            
            break;
        }
    }
    
    if(k<0)
    {
        int i=0;
        int j=v.size()-1;
        while(i<j)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    
    else
    {
    for(int i=v.size()-1;i>0;i--)
    {
        if(v[i]>v[idx1])
        {
            int temp = v[idx1];
            v[idx1] = v[i];
            v[i] = temp;    
            break;
        }
    }
    
    
    
    //let me skip to the reverse part
    int i=idx1+1;
    int j=v.size()-1;
    while(i<j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    }
        nums = v;
    }
};

// Approach 1 : O(n)**2 // find pairs in 2 loops
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count =0 ;
        for(int i=0;i<time.size()-1;i++)
    {
        for(int j=i+1;j<time.size();j++)
        {
            if((time[i]+time[j])%60==0)
                count++;
        }
    }
    return count;
    }
};

//Approcach 2 : O(n) // use unordered map to  find count of pairs
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        //store the frequency in unordered_map
        unordered_map<int,int> map;
        for(int i=0;i<time.size();i++)
        {
            time[i] %=60;
            map[time[i]] +=1;
        }
        //count the pair
        int count = 0;
        for(auto it:map)
        {
            //count for 0 and 30
            if(it.first==0 or it.first==30)
            {
                count+=((it.second-1)*(it.second))/2;
            }
            else if(it.first<30 and map.count(60-it.first))
            {
                count+=(map[it.first]*map[60-it.first]);
            }
        }
        return count;
    }
};

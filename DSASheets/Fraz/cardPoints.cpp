class Solution {
public:
void helper(vector<int> cardPoints, int k,int i, int j,  vector<int>& currCombo)
{
    if( k<=0)
    {
        return;
    }
    if( cardPoints[i] > cardPoints[j])
    {
        currCombo.push_back(cardPoints[i]);
        k--;
        helper(cardPoints, k, i+1, j,  currCombo);
    }
    else if( cardPoints[i] < cardPoints[j])
    {
        currCombo.push_back(cardPoints[j]);
        k--;
        helper(cardPoints, k, i, j-1,  currCombo);
    }
    else
    {
        currCombo.push_back(cardPoints[i]); // take any one of them
        k--;

        //while(i< j and k>0)
        //{
            helper(cardPoints, k, i+1, j-1,  currCombo);
        //}
    }
}
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> currCombo = {};
    int start =0;
    int end = cardPoints.size()-1;
    int s  =0;
    
    helper(cardPoints, k, start, end,  currCombo);
    for(int i:currCombo)
    {
        s+=i;
    }
    return s;
    }
};

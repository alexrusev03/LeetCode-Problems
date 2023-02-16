class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int j= values[0];
        int res= 0;
        for(int i=1;i<values.size();i++){
            res=max(res, j+values[i]-i);
            j=max(j, values[i]+i);
        }
        return res;
    }
};

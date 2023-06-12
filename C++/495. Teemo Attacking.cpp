class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res = 0;
        for (int i = 0; i < timeSeries.size(); i++){
            if(i < timeSeries.size() - 1){
                if (timeSeries[i] + duration - 1 < timeSeries[i+1]){
                    res += duration; 
                }
                else{res += timeSeries[i+1] - timeSeries[i];}
            }
            else{res += duration;}
        }
        return res;
    }
};

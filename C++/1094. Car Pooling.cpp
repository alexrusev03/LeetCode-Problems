class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> passengers = vector<int>(1001);
        for(auto i: trips){
            passengers[i[1]] += i[0];
            passengers[i[2]] -= i[0];
        }
        for(int count: passengers){
            capacity -= count;
            if(capacity<0){
                return false;
            }
        }
        return true;
    }
};

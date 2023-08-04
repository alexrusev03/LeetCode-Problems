class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        for(int i=1; i<10; i++){
            helper(res, low, high, i, 0);
        }
        sort(res.begin(), res.end());
        return res;
    }
    void helper(vector<int>& res, int low, int high, int i, int num){
        if(num>=low && num<=high){
            res.push_back(num);
        }
        if(num>high || i>9){
            return;
        }
        helper(res, low, high, i+1, num*10 + i);
    }
};

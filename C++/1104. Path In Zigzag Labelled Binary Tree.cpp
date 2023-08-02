class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int> res;
        res.push_back(label);
        for(int i = log2(label); i>0; i--){
            label=pow(2,i-1)+pow(2,i)-label/2-1;
            res.push_back(label);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

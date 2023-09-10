class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> res;
        int curr = 1;
        for(int i=0; i<n; i++){
            res.push_back(curr);
            curr*=10;
            while(curr>n){
                curr/=10;
                curr++;
                while(curr%10==0){
                    curr/=10;
                }
            }
        }
        return res;
    }
};

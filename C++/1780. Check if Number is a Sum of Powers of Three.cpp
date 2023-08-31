class Solution {
public:
    bool checkPowersOfThree(int n) {
        int max = log(n)/log(3);
        int res = 0;
        for(int i = max; i>=0; i--){
            if(res + pow(3,i) > n){
                continue;
            }
            res += pow(3,i);
            if(res==n){
                return true;
            }
            if(res+pow(3,i)<n){
                break;
            }
        }
        return false;
    }
};

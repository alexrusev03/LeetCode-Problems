class Solution {
public:
    int lastRemaining(int n) {
        bool l = true;
        int res = 1;
        int step = 1;
        int rem = n;
        while(rem > 1){
            if(l || rem % 2 == 1){
                res += step;
            }
            step *= 2;
            rem /=  2;
            l = !l;
        }
        return res;
    }
};

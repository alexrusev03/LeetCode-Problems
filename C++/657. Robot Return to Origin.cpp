class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0, d=0, l=0, r=0;
        for(auto i: moves){
            if(i == 'U'){
                u++;
            }
            else if(i == 'D'){
                d++;
            }
            else if(i == 'L'){
                l++;
            }
            else if(i == 'R'){
                r++;
            }
        }
        if(u==d && l==r){
            return true;
        }
        return false;
    }
};

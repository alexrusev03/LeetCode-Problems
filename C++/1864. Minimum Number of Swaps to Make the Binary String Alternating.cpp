class Solution {
public:
    int minSwaps(string s) {
        int zeros = 0;
        int ones = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '0'){
                zeros++;
            }
            else{
                ones++;
            }
        }
        if(abs(zeros - ones) > 1){
            return -1;
        }
        if(zeros > ones){
            return helper(s, '0');
        }
        if(zeros < ones){
            return helper(s, '1');
        }
        return min(helper(s, '0'), helper(s, '1'));
    }
    int helper(string& s, char ch) {
        int c = 0;
        for(int i = 0; i < s.size(); i += 2){
            if(s[i] != ch){
                c++;
            }
        }
        return c;
    }
};

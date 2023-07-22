class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0;
        int r = s.size() - 1;
        while(l <= r){
            if(!isalpha(s[l])){
                l++;
            }
            else if(!isalpha(s[r])){
                r--;
            }
            else{
                swap(s[l++], s[r--]);
            }
        }
        return s;
    }
};

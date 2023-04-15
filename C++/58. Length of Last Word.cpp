class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size() - 1;
        while (n >= 0 && s[n] == ' ') {
            n--;
        }
        for (int j = n; j>=0;j--) {
            if(s[j]==' '){
                return count;
            }
            count++;
        }
        return count;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> substr;
        int n = s.size();
        int i = 0;
        int j = 0;
        int size=0;
        while(i<n){
            if(substr.count(s[i])==0){
                substr.insert(s[i]);
                size = max(size, (int) substr.size());
                i++;
            }
            else{
                substr.erase(s[j]);
                j++;
            }
        }
        return size;
    }
};

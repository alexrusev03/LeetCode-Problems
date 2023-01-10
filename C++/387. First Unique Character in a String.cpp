class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, int> m(128);
        for(int i = 0; i<s.size();i++){
            m[s[i]]++;
        }
        for(int j = 0; j<s.size();j++){
            if (m[s[j]]==1){
                return j;
            }
        }
        return -1;
    }
};

//or

class Solution {
public:
    int firstUniqChar(string s) {
        map <char, int> m;
        for(int i = 0; i<s.size();i++){
            m[s[i]]++;
        }
        for(int j = 0; j<s.size();j++){
            if (m[s[j]]==1){
                return j;
            }
        }
        return -1;
    }
};

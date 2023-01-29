class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<pair<char, int>> vec;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                vec.push_back({s[i], i});
            }
            else if(s[i] == ')') {
                if(!vec.empty() && vec.back().first == '(') vec.pop_back();
                else vec.push_back({s[i], i});
            }
        }
        for(int i = s.size() - 1; i >= 0; i--) {
            if(!vec.empty() && vec.back().second == i) {
                s.erase(i, 1);
                vec.pop_back();
            }
        }

        return s;
    }
};

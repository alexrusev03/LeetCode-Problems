class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        vector<string> sol;
        unordered_map<string,int> mp;
        string str;
        for(int i = 0; i+10<=n; i++){
            mp[s.substr(i,10)]++;
        }
        for(auto x: mp){
            if(x.second>1){sol.push_back(x.first);}
        }
        return sol;
    }
};
//or
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        vector<string> sol;
        unordered_map<string,int> mp;
        string str;
        for(int i = 0; i<10 && i<n; i++){
            str+=s[i];
        }
        mp[str]++;
        for(int i = 10; i<n; i++){
            str.erase(0,1);
            str+=s[i];
            mp[str]++;
        }
        for(auto x:mp){
            if(x.second>1){sol.push_back(x.first);}
        }
        return sol;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> anag1;
        for(int i = 0; i<s.size();i++){
            anag1[s[i]]++;
        }
        for(int j=0; j<t.size();j++){
            if (anag1[t[j]]!=0){
                anag1[t[j]]--;
                if(anag1[t[j]]==0){anag1.erase(t[j]);}
            }
        }
        if(anag1.size()!=0){
            return false;
        }
        return true;
    }
};

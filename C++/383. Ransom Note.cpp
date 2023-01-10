class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mag;
        for(int i = 0; i<magazine.size();i++){
            mag[magazine[i]]++;
        }
        for(int j = 0; j<ransomNote.size(); j++){
            if(mag[ransomNote[j]]!=0){
                mag[ransomNote[j]]--;
            }
            else{return false;}
        }
        return true;
    }
};

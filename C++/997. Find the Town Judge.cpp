class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (trust.size() == 0 && n == 1){
            return 1;
        }
        vector<int> trusted(n+1);
        for(int i = 0; i<trust.size(); i++){
            trusted[trust[i][0]]--;
            trusted[trust[i][1]]++;
        }
        for(int i = 0; i<trusted.size();i++){
            if(trusted[i]==n-1){return i;}
        }
        return -1;
    }
};

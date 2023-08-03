class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> res;
        for(auto c: words[0]){
            int flag = 1;
            for(int i = 1; i < words.size(); i++){
                if(words[i].find(c)!=string::npos){
                    words[i].erase(words[i].find(c), 1);
                }
                else{
                    flag = 0;
                    break;
                }
            }
            if(flag!=0){
                res.push_back(string(1,c));
            }
        }
        return res;
    }
};

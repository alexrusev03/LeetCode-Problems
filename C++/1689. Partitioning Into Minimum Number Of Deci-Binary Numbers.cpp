class Solution {
public:
    int minPartitions(string n) {
        int res = 0;
        for(int i = 0; i < n.size(); i++){
            if(res < n[i]-'0'){
                res = n[i]-'0';
            }
        }
        return res;
    }
};

class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0;
        int all=0;
        int n = secret.size();
        unordered_map<char,int> map;
        for(int i=0;i<n;i++){
            if(guess[i]==secret[i]){
                bulls++;
            }
            map[guess[i]]++;  
        }
        for(int i=0;i<n;i++){
            if(map[secret[i]]>0){
                all++;
                map[secret[i]]--;
            }
        }      
        return to_string(bulls)+'A'+to_string(all-bulls)+'B';
    }
};

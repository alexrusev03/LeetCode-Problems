class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> res;
        int l = 0;
        int r = products.size() - 1;
        sort(products.begin(), products.end());
        for(int i = 0; i < searchWord.size(); i++){
            vector<string> temp;
            while(l <= r && (products[l].size() == i || products[l][i] < searchWord[i])){
                l++;
            }
            while(l <= r && (products[r].size() == i || products[r][i] > searchWord[i])){
                r--;
            }
            for(int j = 0; j < 3; j++){
                if(l+j<=r){
                    temp.push_back(products[l+j]);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};

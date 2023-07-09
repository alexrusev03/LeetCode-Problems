class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        map<int,int> mp;
        vector<int> res(2);
        int totalA=0, totalB=0;
        for(int i: bobSizes){
            totalB+=i;
            mp[i]=1;
        }
        for(int j: aliceSizes){
            totalA+=j;
        }
        for(int k: aliceSizes){
            if(mp[(totalB-totalA)/2+k]!=NULL){
                res[0]=k;
                res[1]=(totalB-totalA)/2+k;
                return res;
            }
        }
        return res;
    }
};

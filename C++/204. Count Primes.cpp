class Solution {
public:
    int countPrimes(int n) {
        int res = 0;
        vector<int> vec(n);
        for(int i=2;i<n;i++){
            if(vec[i]==0){
                res++;
                for(int j=2;i*j<n;j++){
                    vec[i*j]=1;
                }
            }
        }
        return res;
    }
};

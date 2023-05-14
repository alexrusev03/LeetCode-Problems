class Solution {
public:
    string getPermutation(int n, int k) {
        string res = "";
        int f=1;
        vector<int> vec;
        for(int i = 1; i<n; i++){
            f*=i;
            vec.push_back(i);
        }
        vec.push_back(n);
        k--;
        while(vec.size()>0){
            res+=to_string(vec[k/f]);
            vec.erase(vec.begin() + k/f);
            k%=f;
            if(vec.size()!=0){
                f/=vec.size();
            }
        }
        return res;
    }
};

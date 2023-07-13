class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int res=0;
        vector<vector<int>> vec(m+1,vector<int>(n+1));
        for(int i=1; i<m+1; i++){
            for(int j=1; j<n+1; j++){
                if(nums1[i-1]==nums2[j-1]){
                    vec[i][j]=vec[i-1][j-1]+1;
                    res=max(vec[i][j],res);
                }
            }
        }
        return res;
    }
};

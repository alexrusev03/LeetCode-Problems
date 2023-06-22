class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i = 0; i<nums1.size(); i++){
            int f = -1;
            int pos = p(nums2,nums1[i]);
            for(int j = pos + 1; j<nums2.size(); j++){
                if(nums2[j]>nums1[i]){
                    f=nums2[j];
                    break;
                }
            }
            res.push_back(f);
        }
        return res;
    }
    int p(vector<int> nums2, int k){
        int n = nums2.size(); 
        for (int i = 0 ; i < n ; i ++){
            if (nums2[i] == k){
                return i; 
            }
        }
        return -1; 
    }
};

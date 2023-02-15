class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int l = i;
            int countn = 0;
            while(l<n && nums[l] == 0){
                l++;
            }
            int curr = l;
            int begn = INT_MIN;
            int endn = INT_MIN;
            while(curr<n && nums[curr] != 0){
                if(nums[curr]<0){
                    countn++;
                    if(begn==INT_MIN){begn = curr;}
                    endn=curr;
                }
                curr++;
            }
            if(countn%2 == 0){
                res = max(res, curr-l);
            }
            else{ 
                if(begn!=INT_MIN){
                    res = max(res,curr-begn-1);
                }
                if(endn != INT_MIN){
                    res = max(res,endn-l);
                }
            }
            i = curr;
        }
        return res;
    }
};

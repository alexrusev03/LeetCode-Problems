class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        string s="";
        int n=nums.size();
        if(n==1){
            s+=to_string(nums[0]);
            return s;
        }
        if(n==2){
            s+=to_string(nums[0])+ "/" + to_string(nums[1]);
            return s;
        }
        for(int i=0;i<n;i++){
            if(i==0){
                s+=to_string(nums[i]);
                s+="/";
                s+="(";
            }
            else if(i==(n-1)){
                s+=to_string(nums[i]);
            }
            else{
                s+=to_string(nums[i]);
                s+="/";
            }
        }
        s+=")";
        return s;
    }
};

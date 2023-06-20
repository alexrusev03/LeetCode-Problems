class Solution {
    public String optimalDivision(int[] nums) {
        String s="";
        int n=nums.length;
        if(n==1){
            s+=nums[0];
            return s;
        }
        if(n==2){
            s+=nums[0]+ "/" + nums[1];
            return s;
        }
        for(int i=0;i<n;i++){
            if(i==0){
                s+=nums[i];
                s+="/";
                s+="(";
            }
            else if(i==(n-1)){
                s+=nums[i];
            }
            else{
                s+=nums[i];
                s+="/";
            }
        }
        s+=")";
        return s;
    }
}

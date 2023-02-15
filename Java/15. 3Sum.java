class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        int n=nums.length;
        List<List<Integer>> sol=new ArrayList<>();
        for(int i=0;i<n-1;i++){
            int l=i+1;
            int r=n-1;
            if(i>0 && nums[i]==nums[i-1]){continue;}
            while(l<r){ 
                if(nums[i]+nums[l]+nums[r]==0){
                    List<Integer> temp=new ArrayList<>();
                    temp.add(nums[i]);
                    temp.add(nums[l]);
                    temp.add(nums[r]);
                    sol.add(temp);
                    while(l<r && nums[l]==nums[l+1]){l++;}
                    while(l<r && nums[r]==nums[r-1]){r--;}
                    l++;
                    r--;
                }
                else if(nums[i]+nums[l]+nums[r]<0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return sol;
    }
}

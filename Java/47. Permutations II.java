class Solution {
    public List<List<Integer>> permuteUnique(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        int n=nums.length;
        helper(0,nums,res,n);
        Arrays.sort(nums);
        return res;
    }
    public void helper(int idx,int[] nums, List<List<Integer>> res, int n){
        if(idx==n){
            ArrayList<Integer> temp =new ArrayList<>();
	    	for(int i = 0 ; i<n ; i++){
	    	    temp.add(nums[i]);
	    	}
	    	res.add(temp);
            return;
        }
        List<Integer>rec=new ArrayList<>();
        for(int i=idx; i<n; i++){
            if(rec.contains(nums[i])){continue;}
            swap(idx, i, nums);
            helper(idx+1,nums,res,n);
            swap(idx, i, nums);
            rec.add(nums[i]);
        }
    }
    public void swap(int i , int j, int[] nums){
	    int k=nums[i];
	    nums[i]=nums[j];
	    nums[j]=k;
	}
}

public class Solution {
    public IList<IList<int>> PermuteUnique(int[] nums) {
        List<IList<int>> res = new();
        int n=nums.Length;
        helper(0,nums,res,n);
        Array.Sort(nums);
        return res;
    }
    public void helper(int idx,int[] nums, List<IList<int>> res, int n){
        if(idx==n){
            List<int> temp =new List<int>();
	    	for(int i = 0 ; i<n ; i++){
	    	    temp.Add(nums[i]);
	    	}
	    	res.Add(temp);
            return;
        }
        List<int> rec=new List<int>();
        for(int i=idx; i<n; i++){
            if(rec.Contains(nums[i])){continue;}
            swap(idx, i, nums);
            helper(idx+1,nums,res,n);
            swap(idx, i, nums);
            rec.Add(nums[i]);
        }
    }
    public void swap(int i , int j, int[] nums){
	    int k=nums[i];
	    nums[i]=nums[j];
	    nums[j]=k;
    }
}

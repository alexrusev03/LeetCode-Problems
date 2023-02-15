public class Solution {
    public IList<IList<int>> ThreeSum(int[] nums) {
        Array.Sort(nums);
        int n=nums.Length;
        IList<IList<int>> sol=new List<IList<int>>();
        for(int i=0;i<n-1;i++){
            int l=i+1;
            int r=n-1;
            if(i>0 && nums[i]==nums[i-1]){continue;}
            while(l<r){ 
                if(nums[i]+nums[l]+nums[r]==0){
                    List<int> temp=new List<int>();
                    temp.Add(nums[i]);
                    temp.Add(nums[l]);
                    temp.Add(nums[r]);
                    sol.Add(temp);
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

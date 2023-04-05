public class Solution {
    public IList<IList<int>> FourSum(int[] nums, int target) {
        var res=new List<IList<int>>();
        int n=nums.Length;
        Array.Sort(nums);
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1;
                int r=n-1;
                while(l<r){
                    long sum=(long)nums[i]+(long)nums[j]+(long)nums[l]+(long)nums[r];
                    if(sum==target){
                        res.Add(new List<int>{nums[i],nums[j],nums[l],nums[r]});
                        int t1 = l;
                        int t2 = r;
                        while(l<r && nums[l]==nums[t1]){
                            l++;
                        }
                        while(l<r && nums[r]==nums[t2]){
                            r--;
                        }
                    }
                    else if(sum<target){
                        l++;
                    }
                    else {
                        r--;
                    }
                }
                while(j<n-2 && nums[j]==nums[j+1]){
                    j++;
                }
            }
            while(i<n-3 && nums[i]==nums[i+1]){
                i++;
            }
        }
        return res;
    }
}

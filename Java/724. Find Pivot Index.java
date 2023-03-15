class Solution {
    public int pivotIndex(int[] nums) {
        List<Integer> list = new ArrayList<Integer>();
        int sum=0;
        for(int i = 0; i<nums.length; i++){
            sum+=nums[i];
            list.add(sum);
        }
        int n = list.size();
        if(sum==list.get(0)){
            return 0;
        }
        for(int i=1;i<n;i++){
            if(list.get(i-1)==list.get(n-1)-list.get(i)){
                return i;
            }
        }
        return -1;
    }
}

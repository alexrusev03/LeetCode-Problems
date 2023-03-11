class Solution {
    int[] arr;
    int n;
    public Solution(int[] nums) {
        arr = nums;
		n = arr.length;
    }
    
    public int[] reset() {
        return arr;
    }
    
    public int[] shuffle() {
        int[] shuffle= arr.clone();	
		int l = n;
		for(int i = n-1; i>=0; i--) {
			int p = new Random().nextInt(i+1);
            int temp = shuffle[i];
			shuffle[i] = shuffle[p];
            shuffle[p] = temp;
			l--;
		}
		return shuffle;
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * int[] param_1 = obj.reset();
 * int[] param_2 = obj.shuffle();
 */

public class Solution {
    int[] arr;
    int[] shuffle;
    int n;
    public Solution(int[] nums) {
        arr = nums;
        shuffle = new int[nums.Length];
		n = arr.Length;
    }
    
    public int[] Reset() {
        return arr;
    }
    
    public int[] Shuffle() {
        shuffle = new int[arr.Length];
        Array.Copy(arr, shuffle, arr.Length);
		int l = n;
		for(int i = n-1; i>=0; i--) {
			int p = new Random().Next(i+1);
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
 * int[] param_1 = obj.Reset();
 * int[] param_2 = obj.Shuffle();
 */

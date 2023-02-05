public class Solution {
    public int FindKthLargest(int[] nums, int k) {
        int[] c=new int[20002];
        c[20001] = 0;
        foreach(int x in nums){
            c[x + 10000]++;
        }
        int i = 20000;
        while(k > 0){
            k -= c[i--];
        }
        return i + 1 - 10000;
    }
}

class Solution {
    public int findKthLargest(int[] nums, int k) {
        int c[] = new int[20002];
        c[20001]=0;
        for(int x: nums){
            c[x + 10000]++;
        }
        int i = 20000;
        while(k > 0){
            k -= c[i--];
        }
        return i + 1 - 10000;
    }
}

class Solution {
    public long minimumRemoval(int[] beans) {
        long n = beans.length;
        long res = Long.MAX_VALUE;
        long sum = 0;
        Arrays.sort(beans);
        for(int i : beans){
            sum += i;
        }
        for(int i = 0; i<n; i++){
            res = Math.min(res, sum - (n - i) * beans[i]);
        }
        return res;
    }
}
